bool IsFoldable(Node* root)
{
    if(!root)
        return true;
    if(!root->left && root->right)
        return false;
    if(root->left && !root->right)
        return false;
    
    queue<Node*> q1,q2;
    q1.push(root->left);
    q2.push(root->right);
    
    while(!q1.empty() && !q2.empty()){
        
        Node*curr1=q1.front();
        Node*curr2=q2.front();
        
        q1.pop();
        q2.pop();
        
        if((!curr1 && curr2) || (curr1 && !curr2))
            return false;
        if(curr1){
            q1.push(curr1->right); 
            q1.push(curr1->left); 
        }    
        if(curr2){
            q2.push(curr2->left); 
            q2.push(curr2->right);    
        }
    }
    
    if(!q1.empty() || !q2.empty())
        return false;
    return true;    
}