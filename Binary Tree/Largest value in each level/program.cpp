class Solution{
    public:
    vector<int> largestValues(Node* root)
    {
        vector<int> ans;
        if(!root)
            return ans;
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()){
            
            int ss=q.size();
            int mx_ele=INT_MIN;
            while(ss--){
                Node*curr=q.front();
                q.pop();
                
                mx_ele=max(mx_ele,curr->data);
                if(curr->left)
                    q.push(curr->left);
                if(curr->right)
                    q.push(curr->right);
            }
            ans.push_back(mx_ele);
        }
        return ans;
        
    }
};