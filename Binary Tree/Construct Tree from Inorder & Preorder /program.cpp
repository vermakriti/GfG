class Solution{
    public:
    unordered_map<int,int> mp;
    Node*builtTreeUntil(int in[],int pre[], int start,int end,int &idx){
        if(start>end)
            return NULL;
        Node*node=new  Node(pre[idx++]);
        if(start==end)
            return node;
        node->left=builtTreeUntil(in,pre,start,mp[node->data]-1,idx);
        node->right=builtTreeUntil(in,pre,mp[node->data]+1,end,idx);
        
        return node;
        
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        for(int i=0;i<n;i++)
            mp[in[i]]=i;
        int idx=0;    
        return builtTreeUntil(in,pre,0,n-1,idx); 
    }
};