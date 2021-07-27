#include<bits/stdc++.h>
using namespace std;

long long dp[100005];
long long mod=1e9+7;

long long fact(int n){
	if(n==0){
		dp[n]=1;
		return 1;
	}
	if(dp[n]!=-1)
		return dp[n];
	long long ans=(n%mod*fact(n-1)%mod)%mod;
	return dp[n]=ans;
}

int main(){

	int n;
	cin >> n;
	long long mx=INT_MIN;
	vector<long long> a(n),ans;
	for(int i=0;i<n;i++){
		cin>>a[i];
		mx=max(mx,a[i]);
	}
	fact(mx);
	for(int i=0;i<n;i++){
		ans.push_back(dp[a[i]]);
	}
	for(auto i:ans)
		cout<<i<<" ";
	cout<<"\n";
	return 0;
}