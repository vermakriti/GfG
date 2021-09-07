class Solution{
    public:
    int maxPathSum(Node* root)
    {
        if(!root)return 0;
        if(!root->left && !root->right);
        return root->data + max(maxPathSum(root->left),maxPathSum(root->right));
    }
};