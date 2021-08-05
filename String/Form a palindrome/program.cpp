class Solution{
  public:
    int dp[1005][1005];
    int solve(int i,int j,string s1,string s2){
        if(i>=s1.size() || j>=s2.size())
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        if(s1[i]==s2[j]){
            dp[i][j]=1+solve(i+1,j+1,s1,s2);
        }    
        else dp[i][j]=max(solve(i,j+1,s1,s2),solve(i+1,j,s1,s2));
        return dp[i][j];
    }
    int countMin(string s1){
        memset(dp,-1,sizeof dp);
        int n=s1.size(),ans=0;
        string s2=s1;
        reverse(s2.begin(),s2.end());
        ans=solve(0,0,s1,s2);
        return (n-ans);
        
    }
};