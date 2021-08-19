/***********number of subsets with given difference*********/
#include<bits/stdc++.h>
using namespace std;

int dp[105][1005];

int solve(int i,int sum,vector<int> a){

	if(i>=a.size() || sum<0)
		return 0;
	if(sum==0)
		return 1;
	if(dp[i][sum]!=-1)
		return dp[i][sum];
	int ans;
	if(a[i]<=sum)
		ans=solve(i+1,sum-a[i],a) + solve(i+1,sum,a);
	else
		ans=solve(i+1,sum,a);
	return dp[i][sum]=ans;
}

int main(){

	memset(dp,-1,sizeof dp);
	int n,d,sum=0;
	cin >> n >> d;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	if((d+sum)%2)
		cout<<"0\n";
	else{

		int count=solve(0,(sum+d)/2,a);
		cout<<count<<"\n";
	}
}
