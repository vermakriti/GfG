int dfs(int i,int j,int k,vector<string>&A,string s,int x[],int y[]){

    if(i<0 || i>=A.size() || j<0 || j>=A[0].size() || A[i][j]!=s[k] || k>=s.size())
        return 0;
    if(k==s.size()-1)
        return 1;     
    for(int l=0;l<4;l++){
        if(dfs(i+x[l],j+y[l],k+1,A,s,x,y))
            return 1;
    }  
    return 0;  
}
int Solution::exist(vector<string> &A, string B) {
    int x[]={1,-1,0,0};
    int y[]={0,0,1,-1};

    for(int i=0;i<A.size();i++){
        for(int j=0;j<A[0].size();j++){
            if(dfs(i,j,0,A,B,x,y))
                return 1;
        }
    }
    return 0;
}
