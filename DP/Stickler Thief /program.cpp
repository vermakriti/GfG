class Solution{
    public:
    int dp[10005];
    int solve(int i,int n,int arr[]){
        if(i>=n)
            return 0;
        if(dp[i]!=-1)
            return dp[i];
        int ans=max(solve(i+1,n,arr),solve(i+2,n,arr)+arr[i]);
        return dp[i]=ans;
    }
    int FindMaxSum(int arr[], int n)
    {
        memset(dp,-1,sizeof dp);
        return solve(0,n,arr);
    }
};
