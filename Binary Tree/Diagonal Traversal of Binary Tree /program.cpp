void preorder(Node*root,map<int,vector<int>> &mp,int h){
    
    if(!root)return;
    mp[h].push_back(root->data);
    preorder(root->left,mp,h+1);
    preorder(root->right,mp,h);
}
vector<int> diagonal(Node *root)
{
    vector<int> ans;
    if(!root)return ans;
    map<int,vector<int>> mp;
    int h=0;
    preorder(root,mp,h);
    for(auto v:mp){
        for(auto ele:v.second)
            ans.push_back(ele);
    }
    return ans;
}