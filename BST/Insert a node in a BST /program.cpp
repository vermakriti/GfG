Node*search(Node*root,int key){
    if(!root || root->data==key)
        return root;
    if(root->data<key)
        return search(root->right,key);
    return search(root->left,key);    
}
Node*Insert(Node*root,int key){
    
    if(!root){
        Node*node=new Node(key);
        return node;
    }
    if(root->data<key)
        root->right=Insert(root->right,key);
    else 
        root->left=Insert(root->left,key);   
    return root;    
}
Node* insert(Node* root, int key)
{
    if(search(root,key))
        return root;
    Insert(root,key);
    return root;
        
}
