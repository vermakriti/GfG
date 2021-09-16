class Solution {
  public:
    int dp[105][105];
    int fun(int i,int j,int m,int n){
        
        if(i>m || j>n)
            return 0;
        if(i==m && j==n)
            return 1;
        if(dp[i][j]!=-1)
            return dp[i][j];
        int ans = (fun(i,j+1,m,n)%1000000007 + fun(i+1,j,m,n)%1000000007)%1000000007;
        return dp[i][j]=ans;
        
    }
    long long int numberOfPaths(int m, int n){
        // code here
        memset(dp,-1,sizeof dp);
        return fun(1,1,m,n);
    }
};