Node*findPredecessor(Node*root){
    
    Node*curr=root->left;
    if(!curr)return NULL;
    while(curr->right && curr->right!=root){
        curr=curr->right;
    }
    return curr;
}
vector <int> preorder(Node* root){
    vector<int> ans;
    Node*curr=root,*predecessor;
    while(curr){
        if(curr->left==NULL){
            ans.push_back(curr->data);
            curr=curr->right;
        }
        else{
            predecessor=findPredecessor(curr);
            if(predecessor->right==NULL){
                predecessor->right=curr;
                ans.push_back(curr->data);
                curr=curr->left;
            }
            else{
                predecessor->right=NULL;
                curr=curr->right;
            }
        } 
    }
    return ans;
}