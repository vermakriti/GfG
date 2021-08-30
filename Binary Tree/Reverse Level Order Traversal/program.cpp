vector<int> reverseLevelOrder(Node *root)
{
    vector<int> ans;
    queue<Node*> q;
    deque<Node*> d;
    q.push(root);
    while(!q.empty()){
        
        Node*curr=q.front();
        q.pop();
        
        d.push_front(curr);
        if(curr->right)
            q.push(curr ->right);
        if(curr->left)
            q.push(curr->left);
    }
    while(!d.empty()){
        
        Node*curr=d.front();
        d.pop_front();
        ans.push_back(curr->data);
    }
    return ans;
}