// TC-O(N) SC-O(N)
class Solution
{
    public:
    void preorder(Node*root, vector<int> &ans){
        if(!root)return;
        ans.push_back(root->data);
        preorder(root->left,ans);
        preorder(root->right,ans);
    }
    vector<int> preOrder(Node* root){
      vector<int> ans;
      inorder(root,ans);
      return ans;
    }
};