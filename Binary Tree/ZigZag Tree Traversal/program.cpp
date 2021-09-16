vector <int> zigZagTraversal(Node* root){
	 
	vector<int> ans;
	queue<Node*> q;
	q.push(root);
	bool flag=true;
	
	while(!q.empty()){
	   	int size=q.size();
	   	if(flag){
	   		while(size--){
		   		Node*curr=q.front();
		    	q.pop();
		    	ans.push_back(curr->data);
		    	if(curr->left)
		        	q.push(curr->left);
		    	if(curr->right)
		        	q.push(curr->right);
	   		}
	   		flag=false;
	   	}
	   	else{
	   		vector<int> a;
	   		while(size--){
		   		Node*curr=q.front();
		    	q.pop();
		    	a.push_back(curr->data);
		    	if(curr->left)
		        	q.push(curr->left);
		    	if(curr->right)
		        	q.push(curr->right);
		   	}
	   		reverse(a.begin(),a.end());
	   		for(auto ele:a)
	   			ans.push_back(ele);
	   		flag=true;
	   	}
	}
	return ans;
	
}