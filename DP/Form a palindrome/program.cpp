class Solution{   
public:
    int dp[505][505];
    int lcs(int i,int j,string &s1,string &s2){
        
        if(i>=s1.size() || j>=s2.size())
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        int ans;
        if(s1[i]==s2[j])
            ans=1+lcs(i+1,j+1,s1,s2);
        else ans = max(lcs(i,j+1,s1,s2),lcs(i+1,j,s1,s2));
        return dp[i][j]=ans;
    }
    int findMinInsertions(string S){
        
        string s=S;
        reverse(s.begin(),s.end());
        memset(dp,-1,sizeof dp);
        int n=S.size();
        
        int len = lcs(0,0,S,s);
        return (n-len);
        
        
    }
};