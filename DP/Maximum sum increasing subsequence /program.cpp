class Solution{
	public:
	int dp[1005];
	int fun(int i,int n,int a[]){
	    if(i==n)
	        return 0;
	    if(dp[i]!=-1)
	        return dp[i];
	    int ans=0;
	    for(int j=i+1;j<n;j++){
	        if(a[j]>a[i]){
	           ans = max(ans,fun(j,n,a)+a[j]);
	        }
	    }
	    return dp[i]=ans;
	}
	int maxSumIS(int arr[], int n)  
	{  
	    memset(dp,-1,sizeof dp);
	    int ans=INT_MIN;
	    for(int i=0;i<n;i++){
	        ans = max(ans,fun(i,n,arr)+arr[i]);
	    }
	    return ans;
	}  
};
