void printCorner(Node *root){
    if(!root)return;
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        int ss=q.size();
        int i=1;
        while(i<=ss){
            Node*front=q.front();
            q.pop();
            if(i==1 || i==ss)
                cout<<front->data<<" ";
            if(front->left)
                q.push(front->left);
            if(front->right)
                q.push(front->right);
            i++;    
        }
    }
}