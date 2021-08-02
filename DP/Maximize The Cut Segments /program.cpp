int dp[4][10005];
int fun(int i,int total,int arr[]){
    
    if(total==0)
        return 0;
    if(i>=3 || total<0)
        return -1e9;
    if(dp[i][total]!=-1)
        return dp[i][total];
    int ans;
    if(arr[i]<=total)
       ans= max(1+fun(i,total-arr[i],arr),fun(i+1,total,arr));
    else ans=fun(i+1,total,arr);   
    return dp[i][total]=ans;
}
int maximizeTheCuts(int n, int x, int y, int z){
    int arr[3]={x,y,z};
    memset(dp,-1,sizeof dp);
    if(fun(0,n,arr)<0) return 0;
    return fun(0,n,arr);
}