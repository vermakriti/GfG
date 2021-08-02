class Solution{
    public:
    void solve(int i,int j,vector<vector<int>> &m,int x[],int y[],char ch[],vector<string> &ans,string s){
        
        if(i>=m.size() || j>=m[0].size() || i<0 || j<0 || m[i][j]==2 || m[i][j]==0)
            return;
        if(i==m.size()-1 && j==m[0].size()-1){
            ans.push_back(s);
            return;
        }
        for(int k=0;k<4;k++){
            int val=m[i][j];
            m[i][j]=2;
            s.push_back(ch[k]);
            solve(i+x[k],j+y[k],m,x,y,ch,ans,s);
            s.pop_back();
            m[i][j]=val;
        }
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        int x[]={1,-1,0,0};
        int y[]={0,0,1,-1};
        char ch[]={'D','U','R','L'};
        
        vector<string> ans;
        string s="";
        
        solve(0,0,m,x,y,ch,ans,s);
        sort(ans.begin(),ans.end());
        return ans;
    }
};