Node*builtTree(int pre[],char preLN[],int n,int &index){
    
    int idx=index;
    index++;
    if(idx==n)
        return NULL;
    Node*node=new Node(pre[idx]);
    
    if(preLN[idx]=='N'){
        node->left=builtTree(pre,preLN,n,index);
        node->right=builtTree(pre,preLN,n,index);
    }
    return node;
}
struct Node *constructTree(int n, int pre[], char preLN[])
{
    int index=0;
    return builtTree(pre,preLN,n,index);
}