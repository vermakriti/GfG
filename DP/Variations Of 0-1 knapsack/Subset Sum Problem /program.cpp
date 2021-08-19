// recursive + memoization
class Solution{  
public:
    int dp[105][10005];
    bool fun(int i,int N,int arr[],int sum){
        
        if(sum==0)
            return 1;
        if( i>=N || sum<0)
            return 0;
        if(dp[i][sum]!=-1)
            return dp[i][sum];
            
        int ans=0;    
        ans |= (fun(i+1,N,arr,sum-arr[i]) + fun(i+1,N,arr,sum));
        return dp[i][sum]=ans;    
    }
    bool isSubsetSum(int N, int arr[], int sum){
        memset(dp,-1,sizeof dp);
        return fun(0,N,arr,sum);
    }
};

