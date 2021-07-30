class Solution{
    public:
    //Function to find the vertical order traversal of Binary Tree.
    vector<int> verticalOrder(Node *root)
    {
        vector<int> ans;
        if(!root)return ans;
        
        map<int,vector<int>> mp;
        queue<pair<Node*,int>> q;
        
        q.push({root,0});
        while(!q.empty()){
            
            auto front=q.front();
            q.pop();
            
            Node*curr=front.first;
            int h=front.second;
            
            mp[h].push_back(curr->data);
            if(curr->left)
                q.push({curr->left,h-1});
            if(curr->right)
                q.push({curr->right,h+1});
        }
        
        for(auto v:mp){
            for(auto ele:v.second)
                ans.push_back(ele);
        }
        return ans;
    }
};