class Solution{
    public:
    Node*head,*prev=NULL;
    void inorder(Node*node){
        
        if(!node)return;
        inorder(node->left);
        
        if(prev==NULL){
            head=node;
            prev=node;
        }
        else{
            node->left=prev;
            prev->right=node;
            prev=node;
        }
        inorder(node->right);
    }
    Node * bToDLL(Node *root){
        inorder(root);
        return head;
    }
};
