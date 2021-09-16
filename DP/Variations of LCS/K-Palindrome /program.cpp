class Solution{
public:
    int dp[1005][1005];
    int solve(int i,int j,string s1, string s2){
        if(i>=s1.size() || j>=s2.size())
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        int ans;    
        if(s1[i]==s2[j])
            ans=1+solve(i+1,j+1,s1,s2);
        else ans=max(solve(i+1,j,s1,s2),solve(i,j+1,s1,s2));
        return dp[i][j]=ans;
    }
    int kPalindrome(string str, int n, int k)
    {
        memset(dp,-1,sizeof dp);
        string str2=str;
        reverse(str2.begin(),str2.end());
        int length=solve(0,0,str,str2);
        if(n-length<=k)
            return 1;
        return 0;    
    }
};
