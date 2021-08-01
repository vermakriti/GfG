class Solution{
    public:
    int sum(Node*root){
        if(!root)return 0;
        int leftSum=sum(root->left);
        int rightSum=sum(root->right);
        return root->data +leftSum + rightSum;
    }
    bool isSumTree(Node* root)
    {   
        if(!root || (!root->left && !root->right))
            return true;
        int leftSum=sum(root->left);
        int rightSum=sum(root->right);
        if((root->data == leftSum+rightSum) && isSumTree(root->left) && isSumTree(root->right))
            return true;
        return false;    
    }
};