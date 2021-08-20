class Solution{
public:
    int dp[505][505];
    bool isPalindrom(int i,int j,string s){
        
        while(i<=j){
            
            if(s[i]!=s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    int fun(int i,int j,string s){
        
        if(i>=j)
            return 0;
        if(isPalindrom(i,j,s))
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        int mn=INT_MAX;    
        for(int k=i;k<j;k++){
            
            int left,right;
            
            if(dp[i][k]!=-1)
                left=dp[i][k];
            else left = fun(i,k,s);
            
            if(dp[k+1][j]!=-1)
                right=dp[k+1][j];
            else right = fun(k+1,j,s);
            
            int temp = right + left +1;
            mn = min(mn,temp);
        }  
        return dp[i][j]=mn;
    }
    int palindromicPartition(string str)
    {
        memset(dp,-1,sizeof dp);
        int n=str.size();
        return fun(0,n-1,str);
    }
};
