int dp[105][105];
class Solution{
public:
    int maxPathSum(int i,int j,int n,vector<vector<int>> &m){
        
        if(i>=n || j>=n || j<0)
            return 0;
        if(i==n-1)
            return m[i][j];
        if(dp[i][j]!=-1) 
            return dp[i][j];
        int ans;
        ans=max({m[i][j]+maxPathSum(i+1,j,n,m), m[i][j]+maxPathSum(i+1,j-1,n,m),
            m[i][j]+maxPathSum(i+1,j+1,n,m) });
        return dp[i][j]=ans;    
    }
    int maximumPath(int N, vector<vector<int>> Matrix)
    {
        int mx=INT_MIN;
        memset(dp,-1,sizeof dp);
        for(int j=0;j<N;j++)
            mx=max(mx,maxPathSum(0,j,N,Matrix));
        return mx;    
    }
};
