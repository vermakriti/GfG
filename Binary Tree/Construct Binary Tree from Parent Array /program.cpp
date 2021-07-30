Node *createTree(int parent[], int N){
    map<int,Node*> mp;
    Node*root;
    for(int i=0;i<N;i++){
        Node *node=new Node(i);
        mp[i]=node;
    }
    for(int i=0;i<N;i++){
        if(parent[i]==-1){
            root=mp[i];
            continue;
        }    
        if(mp[parent[i]]->left==NULL){
            mp[parent[i]]->left = mp[i];
        }
        else {
            mp[parent[i]]->right = mp[i];
        }
    }
    return root;
}