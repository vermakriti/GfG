
// TC-O(N) SC-O(N)
class Solution{
    public:
    void solve(Node*root,vector<int>&ans){
    	if(!root)
    		return;
    	solve(root->left);
    	solve(root->right);
    	ans.push_back(root->data);
	}
    vector<int> postOrder(Node* node) {
        vector<int>ans;
        solve(node,ans);
        return ans;
    }
};