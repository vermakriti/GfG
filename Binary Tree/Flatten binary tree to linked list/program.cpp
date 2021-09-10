class Solution
{
    public:
    void flatten(Node *root)
    {
        Node*prev=nullptr;
        stack<Node*> st;
        st.push(root);
        
        while(!st.empty()){
            Node*curr=st.top();
            st.pop();
            
            if(prev==nullptr)
                root=curr;
            else prev->right=curr;
            prev=curr;
            
            if(curr->right)
                st.push(curr->right);
            if(curr->left)
                st.push(curr->left);
            curr->left=nullptr;
        }
        
    }
};