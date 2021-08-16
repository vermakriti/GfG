class Solution {
public:
    long long dp[55][55][55];
    long long fun(int i,int j,int n,int k,vector<vector<int>> &a){
        
        if(i==n-1 && j==n-1){
           return (k==a[i][j]);
        }   
        if(i>=n || j>=n || k<0)
            return 0;
        if(dp[i][j][k]!=-1)
            return dp[i][j][k];
        
        long long ans=fun(i+1,j,n,k-a[i][j],a) + fun(i,j+1,n,k-a[i][j],a);
        return dp[i][j][k]=ans;
    }
    long long numberOfPath(int n, int k, vector<vector<int>> arr){
        
        memset(dp,-1,sizeof dp);
        return fun(0,0,n,k,arr);
        
    }
};