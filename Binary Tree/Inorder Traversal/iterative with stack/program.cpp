// TC-O(N) SC-O(N)
class Solution {
  public:
    vector<int> inOrder(Node* root) {
        
        vector<int> ans;
        Node*curr=root;
        stack<Node*> st;
        while(curr || !st.empty()){
            while(curr){
                st.push(curr);
                curr=curr->left;
            }
            curr=st.top();
            st.pop();
            ans.push_back(curr->data);
            curr=curr->right;
        }
        return ans;
    }
};