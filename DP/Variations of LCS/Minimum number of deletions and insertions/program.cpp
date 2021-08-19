class Solution{
	
	public:
	int dp[1005][1005];
	int lcs(int i,int j,string &str1,string &str2){
	    
	    if(i>=str1.size() || j>=str2.size())
	        return 0;
	    if(dp[i][j]!=-1)
	        return dp[i][j];
	    int ans;
	    if(str1[i]==str2[j]){
	        ans=1+lcs(i+1,j+1,str1,str2);
	    }
	    else ans = max(lcs(i,j+1,str1,str2),lcs(i+1,j,str1,str2));
	    return dp[i][j]=ans;
	}
	int minOperations(string str1, string str2) 
	{ 
	    // Your code goes here
	    memset(dp,-1,sizeof dp);
	    int len = lcs(0,0,str1,str2);
	    int l1=str1.size();
	    int l2=str2.size();
	    return (l1+ l2-2*len);
	} 
};