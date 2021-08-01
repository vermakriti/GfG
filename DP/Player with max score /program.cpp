class Solution{   
public:
    int dp[1005][1005][2];
    int solve(int i,int j,int arr[],int chance){
        
        if(i>j)
            return 0;
        if(dp[i][j][chance]!=-1)
            return dp[i][j][chance];
        int ans;
        if(chance==0)
            ans=max(solve(i+1,j,arr,1)+arr[i],solve(i,j-1,arr,1)+arr[j]);
        else ans = min(solve(i+1,j,arr,0),solve(i,j-1,arr,0));  
        return dp[i][j][chance]=ans;
    }
    bool is1winner(int N,int arr[]) {
        memset(dp,-1,sizeof dp);
        int tot=0,one,two;
        for(int i=0;i<N;i++)
            tot+=arr[i];
        one=solve(0,N-1,arr,0);
        two=tot-one;
        if(one>two)
            return true;
        return false;    
    }
};
