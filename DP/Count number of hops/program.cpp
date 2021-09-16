class Solution
{
    public:
    long long dp[100005];
    int mod=1e9+7;
    long long fun(int i,int n){
        
        if(i==n)
            return 1;
        if(i>n)
            return 0;
        if(dp[i]!=-1)
            return dp[i];
        long long ans = (fun(i+1,n)%mod + fun(i+2,n)%mod +fun(i+3,n)%mod)%mod;
        return dp[i]=ans;
    }
    long long countWays(int n)
    {
        memset(dp,-1,sizeof dp);
        return fun(0,n); 
    }
};