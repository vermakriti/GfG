class Solution{
    public:
    int dp[105][105];
    int lcs(int i,int j,int m,int n,char* X,char* Y){
        
        if(i>=m || j>=n)
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        int ans;    
        if(*(X+i)==*(Y+j)){
            ans = 1+lcs(i+1,j+1,m,n,X,Y);
        }  
        else {
            ans = max(lcs(i,j+1,m,n,X,Y),lcs(i+1,j,m,n,X,Y));
        }
        return dp[i][j]=ans;
    }
    int shortestCommonSupersequence(char* X, char* Y, int m, int n){
        memset(dp,-1,sizeof dp);
        int l = lcs(0,0,m,n,X,Y);
        return (m+n-l);
    }
};
