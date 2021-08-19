class TreeNode{
    public:
    int data;
    TreeNode*left,*right;
    TreeNode(int x){
        data=x;
        left=nullptr;
        right=nullptr;
    }
};

unordered_map<int,int> mp;
TreeNode*builtTree(int pre[],int in[],int start,int end,int&index){
    if(start>end){
        return NULL;
    }
    TreeNode*node=new TreeNode(pre[index++]);
    if(start==end)
        return node;
    node->left=builtTree(pre,in,start,mp[node->data]-1,index);
    node->right=builtTree(pre,in,mp[node->data]+1,end,index);
    return node;
}
void postOrder(TreeNode*root){
    if(!root)return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
void printPostOrder(int in[], int pre[], int n)
{
    for(int i=0;i<n;i++){
        mp[in[i]]=i;
    }
    int index=0;
    TreeNode*root=builtTree(pre,in,0,n-1,index);
    postOrder(root);
}