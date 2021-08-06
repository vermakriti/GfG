class Solution{
  public:
    Node*head=NULL,*prev=NULL;
    void inorder(Node*root){
        if(!root)return;
        inorder(root->left);
        
        if(prev==NULL){
            head=root;
            prev=root;
        }
        else{
            prev->right=root;
            root->left=prev;
            prev=root;
        }
        inorder(root->right);
    }
    Node *bTreeToCList(Node *root)
    {
        if(!root)return root;
        inorder(root);
        
        prev->right=head;
        head->left=prev;
        return head;
    }
};