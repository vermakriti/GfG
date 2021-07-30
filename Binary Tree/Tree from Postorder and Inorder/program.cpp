Node*Tree(int in[],int post[],unordered_map<int,int> &mp,int start,int end,int &idx){
    if(start>end)
        return NULL;
    Node *node=new Node(post[idx--]);
    if(start==end)
        return node;
    int index=mp[node->data];    
    node->right=Tree(in,post,mp,index+1,end,idx);
    node->left=Tree(in,post,mp,start,index-1,idx);
    return node;
}
Node *buildTree(int in[], int post[], int n) {
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
        mp[in[i]]=i;
    int idx=n-1;    
    return Tree(in,post,mp,0,n-1,idx);    
}