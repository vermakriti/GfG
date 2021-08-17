class Solution{
    public:
    unordered_map<string,int> mp;
    int dp[1005];
    
    int solve(int i,string A){
        if(i>A.size())
            return 0;
        if(i==A.size())
            return 1;
        if(dp[i]!=-1)
            return dp[i];
        int ans=0;
        string s="";
        for(int j=i;j<A.size();j++){
            s+=A[j];
            if(mp[s])
                ans=solve(j+1,A);
        }
        return dp[i]=ans;
    }
    int wordBreak(string A, vector<string> &B) {
        for(int i=0;i<B.size();i++){
            mp[B[i]]++;
        }
        memset(dp,-1,sizeof dp);
        return solve(0,A);
        
    }
};