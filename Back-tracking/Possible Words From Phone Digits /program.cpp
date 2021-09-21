class Solution
{
    public:
    void solve(int i,int a[],int n, map<int,string> mp,string s,vector<string>&ans){
        if(s.size()==n){
            ans.push_back(s);
            return;
        }
        if(i>=n)
            return;
        for(int j=0;j<mp[a[i]].size();j++){
            s.push_back(mp[a[i]][j]);
            solve(i+1,a,n,mp,s,ans);
            s.pop_back();
        }    
    }
    vector<string> possibleWords(int a[], int N)
    {
        map<int,string> mp;
        vector<string> ans;
        string s="";
        
        mp[0]="";
        mp[1]="";
        mp[2]="abc";
        mp[3]="def";
        mp[4]="ghi";
        mp[5]="jkl";
        mp[6]="mno";
        mp[7]="pqrs";
        mp[8]="tuv";
        mp[9]="wxyz";
      
        solve(0,a,N,mp,s,ans);
        return ans;
    }
};