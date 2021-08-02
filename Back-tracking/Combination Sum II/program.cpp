void solve(int i,vector<int>&A,int B,set<vector<int>> &s,vector<int>temp){

    if(B==0){
        s.insert(temp);
        return;
    }    
    if(i>=A.size()|| B<0)
        return;
    for(int j=i;j<A.size();j++){
        temp.push_back(A[j]);
        solve(j+1,A,B-A[j],s,temp);
        temp.pop_back();
    }
}

vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    sort(A.begin(),A.end());
    set<vector<int>> s;
    vector<int> temp;
    vector<vector<int>> ans;
    solve(0,A,B,s,temp);
    for(auto v:s)
        ans.push_back(v);
    return ans;    
}
