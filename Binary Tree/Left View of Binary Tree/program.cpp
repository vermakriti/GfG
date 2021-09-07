// using bfs
vector<int> leftView(Node *root)
{
   vector<int> ans;
   if(!root)return ans;

   queue<Node*> q;
   q.push(root);

    while(!q.empty()){

        int i=1,size=q.size();
        while(i<=size){
            Node*curr=q.front();
            q.pop();
            if(i==1)
                ans.push_back(curr->data);
            
            if(curr->left)
                q.push(curr->left);
            if(curr->right)
                q.push(curr->right);
            i++;
        }     
   }
   return ans;
}

