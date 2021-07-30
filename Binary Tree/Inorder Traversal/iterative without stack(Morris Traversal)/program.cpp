class Solution {
  public:
    // Function to return a predecessor of node
    // predecessor - In left subtree of curr,pick the rightmost node, not equal to curr or null
    Node*findPredecessor(Node*root){
        
        Node*curr=root->left;
        if(!curr)return NULL;
        while(curr->right && curr->right!=root){
            curr=curr->right;
        }
        return curr;
    }
    vector<int> inOrder(Node* root) {
        vector<int> ans;
        Node*curr=root,*predecessor;
        while(curr){
            if(!curr->left){
                ans.push_back(curr->data);
                curr=curr->right;
            }
            else{
                predecessor=findPredecessor(curr);
                if(predecessor->right==NULL){
                    predecessor->right=curr;
                    curr=curr->left;
                }
                else{
                    predecessor->right=NULL;
                    ans.push_back(curr->data);
                    curr=curr->right;
                }
            }
        }
        return ans;
    }
};