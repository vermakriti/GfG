class Solution{
    public:
    void connect(Node *root)
    {
        if(!root)return;
        Node*prev=NULL;
        queue<Node*>q;
        q.push(root);
        
        while(!q.empty()){
            
            int size=q.size();
            int i=1;
            while(i<=size){
                Node*front=q.front();
                q.pop();
                if(i==1){
                    prev=front;
                }
                else{
                    prev->nextRight=front;
                    prev=front;
                }
                if(front->left)
                    q.push(front->left);
                if(front->right)
                    q.push(front->right);
                i++;    
            }
            prev->nextRight=NULL;
            
        }
    }    
      
};
