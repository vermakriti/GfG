#define mod 1000000007
class Solution {
  public:
    long long dp[1002];
    long long fib(long long n){
        
        if(n==1 || n==2)
            return 1;
        if(dp[n]!=-1)
            return dp[n];
        long long ans= (fib(n-1)%mod+fib(n-2)%mod)%mod;
        return dp[n]=ans;
    }
    long long int nthFibonacci(long long int n){
        // code here
        memset(dp,-1,sizeof dp);
        return fib(n);
    }
};
