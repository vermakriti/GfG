class Solution{
public:	
	int dp[100005];
	int solve(int i,int n,int a[]){
	    if(i>=n)
	        return 0;
	    if(dp[i]!=-1)
	        return dp[i];
	    int ans = max(solve(i+2,n,a)+a[i],solve(i+1,n,a));    
	    return dp[i]=ans;
	}
	int findMaxSum(int *arr, int n) {
	    memset(dp,-1,sizeof dp);
	    return solve(0,n,arr);
	}
};
