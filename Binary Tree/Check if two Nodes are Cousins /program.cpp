int height(Node*root,int &parent,int num,int h){
        
        if(!root)
            return 0;
        if(root->data==num)
            return h;    
        parent=root->data;
        int left=height(root->left,parent,num,h+1);
        if(left)return left;
        
        parent=root->data;
        int right=height(root->right,parent,num,h+1);
        if(right)return right;
}
bool isCousins(Node *root, int a, int b)
{
    if(root->data==a || root->data==b)
        return false;
    int parentA=-1,parentB=-1;
    int heightA=height(root,parentA,a,0);
    int heightB=height(root,parentB,b,0);
    
    if(heightA==heightB && parentA!=parentB)
        return true;
    return false;    
}