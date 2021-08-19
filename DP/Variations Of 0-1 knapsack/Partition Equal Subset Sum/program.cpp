class Solution{
public:
    int dp[105][10005];
    int solve(int i,int sum,int arr[],int n){
        if(sum==0)
            return 1;
        if(i==n || sum<0)
            return 0;
        if(dp[i][sum]!=-1)
            return dp[i][sum];
        int ans=0;
        if(arr[i]<=sum){
            ans = solve(i+1,sum-arr[i],arr,n) + solve(i+1,sum,arr,n);
        }
        else ans = solve(i+1,sum,arr,n);
        return dp[i][sum]=ans;
    }
    int equalPartition(int N, int arr[])
    {
        memset(dp,-1,sizeof dp);
        int sum=0;
        for(int i=0;i<N;i++)
            sum+=arr[i];
        if(sum%2) return 0;
        return solve(0,sum/2,arr,N);
    }
};
