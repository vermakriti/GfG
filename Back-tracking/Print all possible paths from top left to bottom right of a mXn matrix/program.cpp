#include<bits/stdc++.h>
using namespace std;
#define MAX 1005

bool isValid(int i,int j,int m,int n){
	if(i>=m || j>=n)
		return false;
	return true;
}

void solve(int i,int j,int m,int n,int a[MAX][MAX],vector<int>temp,vector<vector<int>> &ans){

	if(i==m-1 && j==n-1){
		temp.push_back(a[i][j]);
		ans.push_back(temp);
		return;
	}
	if(i>=m || j>=n)
		return ;
	if(isValid(i,j,m,n)){
		temp.push_back(a[i][j]);
		solve(i+1,j,m,n,a,temp,ans);
		solve(i,j+1,m,n,a,temp,ans);
	}
	
}
int main(){
	int m,n;
	cin>>m>>n;
	int a[MAX][MAX];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	}
	vector<vector<int>> ans;
	vector<int> temp;
	solve(0,0,m,n,a,temp,ans);

	for(int i=0;i<m;i++){
		for(int j=0;j<n;i++){
			cout<<ans[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}