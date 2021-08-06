class Solution {
    public:
	void dfs(int i,vector<int> &ans,vector<bool>&visited,vector<int> adj[]){
	    visited[i]=true;
	    ans.push_back(i);
	    for(auto node:adj[i]){
	        if(!visited[node])
	           dfs(node,ans,visited,adj); 
	    }
	}
	vector<int>dfsOfGraph(int V, vector<int> adj[]){
	    vector<bool>visited(V,false);
	    vector<int> ans;
	    for(int i=0;i<V;i++){
	        if(!visited[i])
	            dfs(i,ans,visited,adj);
	    }
	    return ans;  
	}
};