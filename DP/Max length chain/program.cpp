int dp[105];
int fun(int i, vector<vector<int>> p,int n){
    
    if(i>=n)return 0;
    if(dp[i]!=-1)return dp[i];
    int ans=0;
    for(int j=i+1;j<n;j++){
        if(p[j][0]>p[i][1])
            ans = max(ans,fun(j,p,n)+1);
    }
    return dp[i]=ans;
}
int maxChainLen(struct val p[],int n)
{
    memset(dp,-1,sizeof dp);
    vector<vector<int>> v;
    for(int i=0;i<n;i++){
        vector<int> a;
        a.push_back(p[i].first);
        a.push_back(p[i].second);
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        ans = max(ans,fun(i,v,n));
    }
    return ans+1;
}