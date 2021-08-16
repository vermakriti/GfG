// TC=O(N) SC=(N)
class Solution{
  public:
    void inorder(Node*root,vector<int> &v){
        
        if(!root)return;
        inorder(root->left,v);
        v.push_back(root->data);
        inorder(root->right,v);
    }
    int isPairPresent(struct Node *root, int target)
    {
        vector<int> v;
        inorder(root,v);
        if(v.size()==1)
            return 0;
        int i=0,j=v.size()-1;
        while(i<j){
            
            if(v[i]+v[j]==target)
                return 1;
            if(v[i]+v[j]<target)    
                i++;
            else j--;    
        }
        return 0;
    }
};
//TC = O(N) SC=(1)

