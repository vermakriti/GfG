class Solution {
  public:
    vector <int> bottomView(Node *root) {
        
        vector<int> ans;
        if(!root)return ans;
        
        map<int,vector<int>> mp;
        queue<pair<Node*,int>> q;
        q.push({root,0});
        
        while(!q.empty()){
            auto front=q.front();
            q.pop();
            int h=front.second;
            mp[h].push_back(front.first->data);
            
            if(front.first->left)
                q.push({front.first->left,h-1});
            if(front.first->right)
                q.push({front.first->right,h+1});
        }
        for(auto v:mp){
            ans.push_back(v.second.back());
        }
        return ans;
    }
};