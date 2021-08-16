class Solution{
    public:
	vector<int>bfsOfGraph(int V, vector<int> adj[]){
	    vector<int> ans,visited(V,false);
	    queue<int> q;
	    for(int i=0;i<V;i++){
	    	if(!visited[i]){
	    		q.push(i);
	    		visited[i]=true;
			    while(!q.empty()){
			        int node = q.front();
			        q.pop();
			        ans.push_back(node);
			        for(auto i:adj[node]){
			            if(!visited[i]){
			                visited[i]=true;
			                q.push(i);
			            }
			               
			        }
			    }
	    	}
	    }
	    return ans;
	}
};
