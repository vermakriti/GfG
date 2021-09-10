class Solution
{
    public:
    void solve(Node*root,int sum,vector<int> v,vector<vector<int>> &ans){
        
        if(!root)
            return;
        sum-=root->key;
        v.push_back(root->key);
        if(sum==0){
            ans.push_back(v);
            return;
        }    
        solve(root->left,sum,v,ans);
        solve(root->right,sum,v,ans);
    }
    vector<vector<int>> printPaths(Node *root, int sum)
    {
       vector<vector<int>> ans;
       vector<int> v;
       solve(root,sum,v,ans);
       return ans;
    }
};