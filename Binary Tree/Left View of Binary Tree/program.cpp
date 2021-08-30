// using bfs
vector<int> leftView(Node *root)
{
   // Your code here
   vector<int> ans;
   if(!root)return ans;
   queue<Node*> q1;
   q1.push(root);
   while(!q1.empty()){
       Node*curr=q1.front();
       v.push_back(temp->data);
       q1.pop();
       if(curr->left){
           q1.push(curr->left);
       }else if(curr->right){
           q1.push(curr->right);
       }
   }
   return ans;
}
//using dfs
