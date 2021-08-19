int dp[1005][1005];
class Solution{
	public:
	int fun(int i,int m,int v,int coin[]){
	    if(v==0)
	        return 0;
	    if(i>=m || v<0)
	        return 1e9;
	    if(dp[i][v]!=-1)
	        return dp[i][v];
	    int ans;     
	    if(coin[i]<=v)      
	        ans=min(1+fun(i,m,v-coin[i],coin),fun(i+1,m,v,coin));  
	    else ans=fun(i+1,m,v,coin); 
	    return dp[i][v]=ans;
	}
	int minCoins(int coins[], int M, int V){ 
	    memset(dp,-1,sizeof dp);
	    if(fun(0,M,V,coins)==1e9)
	        return -1;
	    return fun(0,M,V,coins);      
	} 
	  
};
