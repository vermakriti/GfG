// TC-O(N) SC-O(N)
class Solution
{
    public:
    //Function to return a list containing the inorder traversal of the tree.
    void inorder(Node*root, vector<int> &v){
        if(!root)return;
        inorder(root->left,v);
        v.push_back(root->data);
        inorder(root->right,v);
    }
    vector<int> inOrder(Node* root){
      vector<int> v;
      inorder(root,v);
      return v;
    }
};