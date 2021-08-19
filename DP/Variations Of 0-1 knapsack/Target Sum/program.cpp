/************Target Sum************/
#include<bits/stdc++.h>
using namespace std;
int dp[25][1005];

int solve(int i,int target,vector<int> a){

	if(i>=a.size() && target==1000)
		return 1;
	if(i>=a.size())
		return 0;
	if(dp[i][target]!=-1)
		return dp[i][target];
	int ans=solve(i+1,target-a[i],a) + solve(i+1,target+a[i],a);
	return dp[i][target]=ans;
}
int main(){

	memset(dp,-1,sizeof dp);
	int n,target;
	cin>>n>>target;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int count=solve(0,target+1000,a);
	cout<<count<<"\n";
}
