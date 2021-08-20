 class Solution{
  public:
    int dp[105][105];
    int solve(int i,int j,string s,string t){
        
        if(i==s.size())
            return (t.size()-j);
        if(j==t.size())
            return (s.size()-i);
        if(dp[i][j]!=-1)
            return dp[i][j];
        int ans;    
        if(s[i]==t[j])
            ans=solve(i+1,j+1,s,t);
        else     
          ans = 1+min({solve(i,j+1,s,t),solve(i+1,j+1,s,t),solve(i+1,j,s,t)});
        return dp[i][j]=ans;
    }
    int editDistance(string s, string t) {
        memset(dp,-1,sizeof dp);
        return solve(0,0,s,t);
    }
};