class Solution{
    public:
    Node* solve(int in[],int pre[],unordered_map<int,int> mp,int start,int end,int &idx){
        if(start>end)
            return NULL;
        Node * node=new Node(pre[idx++]);
        if(start==end)
            return node;
        int index=mp[node->data];    
        node->left= solve(in,pre,mp,start,index-1,idx);
        node->right = solve(in,pre,mp,index+1,end,idx);
        return node;
    
    }
    Node* buildTree(int in[],int pre[], int n){
        unordered_map<int,int> mp;
        int idx=0;
        for(int i=0;i<n;i++)
            mp[in[i]]=i;
        return solve(in,pre,mp,0,n-1,idx);      
    }
};