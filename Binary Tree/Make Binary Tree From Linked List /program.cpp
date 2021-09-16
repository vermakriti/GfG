void convert(Node *head, TreeNode *&root) {
  
    if(!head)
        return;
    queue<TreeNode*> q;
    root=new TreeNode(head->data);
    q.push(root);
    head=head->next;
    while(head && !q.empty()){
        
        TreeNode*front=q.front();
        q.pop();
        
        if(head){
            front->left= new TreeNode(head->data);
            head=head->next;
            q.push(front->left);
        }
        if(head){
            front->right= new TreeNode(head->data);
            head=head->next;
            q.push(front->right);
        }
        
    }
    
}