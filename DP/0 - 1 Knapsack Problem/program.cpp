class Solution{
    public:
    int dp[1005][1005];
    int fun(int i,int w,int n,int wt[],int val[]){
        if(i>=n || w<=0)
            return 0;
        if(dp[i][w]!=-1)
            return dp[i][w];
        int ans;    
        if(wt[i]<=w){
            ans = max(fun(i+1,w-wt[i],n,wt,val)+val[i],fun(i+1,w,n,wt,val));
        }    
        else ans = fun(i+1,w,n,wt,val);
        return dp[i][w]=ans;
    }
    int knapSack(int W, int wt[], int val[], int n) { 
       memset(dp,-1,sizeof dp);
       return fun(0,W,n,wt,val);
    }
};