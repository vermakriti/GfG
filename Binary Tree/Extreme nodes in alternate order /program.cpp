class Solution{
  public:
    vector<int> ExtremeNodes(Node* root)
    {
        vector<int> ans;
        if(!root)return ans;
        bool flag=true;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            
            int size=q.size();
            int i=1;
            while(i<=size){
                Node*front=q.front();
                q.pop();
                if(i==size && flag)
                    ans.push_back(front->data);
                if(i==1 && !flag)    
                    ans.push_back(front->data);
                if(front->left)
                    q.push(front->left);
                if(front->right)
                    q.push(front->right);
                i++;    
            }
            flag=!flag;
        }
        return ans;
    }
};