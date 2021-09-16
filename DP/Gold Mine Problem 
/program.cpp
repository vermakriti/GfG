class Solution{
public:
    int dp[52][52];
    int fun(int i,int j,int n,int m,vector<vector<int>>&M){
        
        if(i>=n || j>=m || i<0 || j<0)
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        int ans=0;
        ans=max({M[i][j]+fun(i,j+1,n,m,M), M[i][j]+fun(i-1,j+1,n,m,M),M[i][j]+fun(i+1,j+1,n,m,M)});
        return dp[i][j]=ans;
    }
    int maxGold(int n, int m, vector<vector<int>> M)
    {
      
       int ans=0;
       for(int i=0;i<n;i++){
            memset(dp,-1,sizeof dp);
            int gold=fun(i,0,n,m,M);
            ans=max(ans,gold);
       }
       return ans;
    }
};