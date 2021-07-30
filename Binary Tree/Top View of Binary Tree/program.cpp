class Solution{
    public:
    vector<int> topView(Node *root)
    {
        vector<int> ans;
        if(!root)
            return ans;
        queue<pair<Node*,int>> q;
        map<int,vector<int>> mp;
        
        q.push({root,0});
        while(!q.empty()){
            
            auto front=q.front();
            q.pop();
            int h=front.second;
            Node*curr=front.first;
            
            mp[h].push_back(curr->data);
            if(curr->left)
                q.push({curr->left,h-1});
            if(curr->right)
                q.push({curr->right,h+1});
        }
        for(auto v:mp){
            ans.push_back(v.second.front());
        }
        return ans;
    }
};