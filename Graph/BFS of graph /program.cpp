class Solution{
    public:
	vector<int>bfsOfGraph(int V, vector<int> adj[]){
	    vector<int> ans,visited(V,false);
	    queue<int> q;
	    q.push(0);
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
	    return ans;
	}
};
