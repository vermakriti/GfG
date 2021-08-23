class Solution{
  public:
    int evalTree(node* root) {
        
        if(!root)return 0;
        if(!root->left && !root->right)
            return stoi(root->data);
            
        int left=  evalTree(root->left);
        int right = evalTree(root->right);
        
        if(root->data=="*")
            return left*right;
        if(root->data=="+")
            return left+right;
        if(root->data=="-")
            return left-right;
        return left/right;    
    }
};