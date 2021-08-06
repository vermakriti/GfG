int maxNodeLevel(Node *root)
{
    int level=0,size=0,ans=0;
    queue<Node*> q;
    q.push(root);
    
    while(!q.empty()){
        
        int ss=q.size();
        if(ss>size){
            size=ss;
            ans=level;
        }
        while(ss--){
            Node*node=q.front();
            q.pop();
            
            if(node->left)
                q.push(node->left);
            if(node->right)
                q.push(node->right);
        }
        level++;
        
    }
    return ans;
}