// based on Lowest common ancestor concept
bool firstNode=false;
bool secondNode=false;

Node*LCA(Node*root,int a,int b){
    
    if(!root)return NULL;
    if(root->data==a){
        firstNode=true;
        return root;
    }
    if(root->data==b){
        secondNode=true;
        return root;
    }
    
    Node*left=LCA(root->left,a,b);
    Node*right = LCA(root->right,a,b);
    
    if(left && right)
        return root;
    return left ? left : right;    
}

Node*LCAUntil(Node*root,int a,int b){
    
    Node*lca=LCA(root,a,b);
    if(firstNode && secondNode)
        return lca;
    return NULL;    
}

int distance(Node*root,int num,int level){
    if(!root)return -1;
    if(root->data==num)
        return level;
    int left=distance(root->left,num,level+1);
    if(left!=-1)return left;
    return distance(root->right,num,level+1);
    
}
int findDist(Node* root, int a, int b) {

    if(!root)return -1;
    Node*lca =LCAUntil(root,a,b);
    if(!lca)return -1;
    
    int d1=distance(lca,a,0);
    int d2=distance(lca,b,0);
    
    return d1+d2;
    
}