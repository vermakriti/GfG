class Solution{
  public:
    int minDepth(Node *root) {
        if(!root)
            return 1e9;
        if(!root->left && !root->right)
            return 1;
        return min(minDepth(root->left),minDepth(root->right))+1;    
    }
};