class Solution
{
    public:
    void solve(int i,vector<int> a,set<vector<int>>&s,vector<int> temp){
        s.insert(temp);
        if(i>=a.size())
            return;
        for(int j=i;j<a.size();j++){
            temp.push_back(a[j]);
            solve(j+1,a,s,temp);
            temp.pop_back();
        }    
    }
    vector<vector<int> > AllSubsets(vector<int> arr, int n){
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        vector<int> temp;
        set<vector<int>> s;
        solve(0,arr,s,temp);
        for(auto a:s)
            ans.push_back(a);
        return ans;    
    }
};