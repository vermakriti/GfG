class Solution{
public:
    int dp[1005][1005];
    int solve(int i,int n,int w, int val[], int wt[]){
        
        if(i>=n || w<0)
            return 0;
        if(dp[i][w]!=-1)
            return dp[i][w];
        int ans;    
        if(wt[i]<=w){
            ans=max(solve(i,n,w-wt[i],val,wt)+val[i],solve(i+1,n,w,val,wt));
        }
        else ans=solve(i+1,n,w,val,wt);
        return dp[i][w]=ans;
    }
    int knapSack(int N, int W, int val[], int wt[])
    {
        memset(dp,-1,sizeof dp);
        return solve(0,N,W,val,wt);
    }
};