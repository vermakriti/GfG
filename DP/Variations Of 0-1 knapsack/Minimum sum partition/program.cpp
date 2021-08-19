class Solution{

  public:
    int dp[1005][1005];
    int solve(int i,int sum,int arr[],int n){
        
        if(sum==0)
            return 1;
        if(i>=n || sum<0)
            return 0;
        if(dp[i][sum]!=-1)
            return dp[i][sum];
        int ans=0; 
        if(arr[i]<=sum)
            ans |= solve(i+1,sum-arr[i],arr,n) + solve(i+1,sum,arr,n);
        else ans|= solve(i+1,sum,arr,n);
        return dp[i][sum]=ans;
    }
	int minDifference(int arr[], int n)  { 
	   if(n==1)
	        return arr[0];
	   int tot=0,ans=INT_MAX;
	   for(int i=0;i<n;i++)
	        tot+=arr[i];
	   for(int i=tot/2;i>=1;i--){
	       memset(dp,-1,sizeof dp); 
	       if(solve(0,i,arr,n)){
	            ans=min(ans,tot-2*i);
	            break;
	       }     
	   } 
	   return ans;
	} 
};