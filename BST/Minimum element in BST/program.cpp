int minValue(Node* root) {
    Node*curr=root;    
    while(curr->left!=nullptr){
        curr=curr->left;
    }
    return curr->data;
}
