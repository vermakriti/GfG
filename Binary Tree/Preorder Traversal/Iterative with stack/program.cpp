// TC-O(N) SC-O(N)
vector <int> preorder(Node* root){
    stack<Node*> st;
    vector<int> ans;
    st.push(root);
    while(!st.empty()){
        
        Node*curr=st.top();
        ans.push_back(curr->data);
        st.pop();
        
        if(curr->right)
            st.push(curr->right);
        if(curr->left)
            st.push(curr->left);
    }
    return ans;
    
}