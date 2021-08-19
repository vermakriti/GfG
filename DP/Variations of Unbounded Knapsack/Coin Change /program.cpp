class Solution
{
  public:
    long long dp[1005][1005];
    long long count(int i,int a[],int m,int n){
        
        if(i>=m||n<0)
            return 0;
        if(n==0)
            return 1;
        if(dp[i][n]!=-1)
            return dp[i][n];
        long long ans;
        ans=count(i,a,m,n-a[i])+count(i+1,a,m,n);
        return dp[i][n]=ans;
    }
    long long int count( int S[], int m, int n )
    {
       memset(dp,-1,sizeof dp);
       return count(0,S,m,n);
       
    }
};