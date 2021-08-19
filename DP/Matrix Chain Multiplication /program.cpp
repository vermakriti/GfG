class Solution{
public:
    int dp[105][105];
    int mcm(int i,int j,int arr[]){
        
        if(i>=j)
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        int mn=INT_MAX;
        for(int k=i;k<j;k++){
            int temp = mcm(i,k,arr) + mcm(k+1,j,arr) + arr[i-1]*arr[k]*arr[j];
            mn=min(mn,temp);
        }
        return dp[i][j]=mn;
    }
    int matrixMultiplication(int N, int arr[])
    {
        // code here
        memset(dp,-1,sizeof dp);
        int ans = mcm(1,N-1,arr);
        return ans;
    }
};