class Solution{
    public:
    int dp[100005];
    int mod=1e9+7;
    int solve(int i,int n){
        if(i>n)
            return 0;
        if(i==n)
            return 1;
        if(dp[i]!=-1)
            return dp[i];
        int ans= (solve(i+1,n)%mod + solve(i+2,n)%mod)%mod;
        return dp[i]=ans;
    }
    int countWays(int n){
       memset(dp,-1,sizeof dp);
       return solve(0,n);
    }
};
