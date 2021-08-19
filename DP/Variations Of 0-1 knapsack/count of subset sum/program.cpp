/**********Count of subset sum*********/
#include<bits/stdc++.h>
using namespace std;

int dp[105][1005];

int solve(int i,vector<int>&a,int sum){
	if(sum==0)
		return 1;
	if(i>=a.size() || sum<0)
			return 0;
	if(dp[i][sum]!=-1)
		return dp[i][sum];
	int ans;
	ans=solve(i+1,a,sum-a[i]) + solve(i+1,a,sum);
	return dp[i][sum];
}
int main(){

	memset(dp,-1,sizeof dp);
	int n,sum;
	cin >> n >> sum;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int count=0;
	count= solve(0,a,sum);
	cout<<count<<"\n";
}
