class Solution {
  public:
    int solve(Node*root,int &ans){
        if(root==NULL)
            return 0;
        int l=solve(root->left,ans);
        int r=solve(root->right,ans);
        int temp = 1+max(l,r);
        ans=max(ans,l+r+1);
        return temp;
    }
    int diameter(Node* root) {
        int ans=0;
        solve(root,ans);
        return ans;
    }
};