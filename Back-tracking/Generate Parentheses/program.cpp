class Solution
{
    public:
    void solve(int open,int close,int n,vector<string> &ans,string s){
        if(s.size()==2*n){
            ans.push_back(s);
            return;
        }
        if(open<n){
            s.push_back('(');
            solve(open+1,close,n,ans,s);
            s.pop_back();
        }
        if(close<open){
            s.push_back(')');
            solve(open,close+1,n,ans,s);
            s.pop_back();
        }
    }
    vector<string> AllParenthesis(int n) 
    {
        vector<string> ans;
        string s="";
        solve(0,0,n,ans,s);
        return ans;
    }
};