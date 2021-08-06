class Solution {
    public:
    bool checkForCycle(int i,int parent,vector<int> adj[],vector<bool>&visited){
        
        visited[i]=true;
        for(auto it:adj[i]){
            if(!visited[it]){
                visited[it]=true;
                if(checkForCycle(it,i,adj,visited))
                    return true;
            }
            else if(it!=parent)
                return true;
        }
        return false;
        
    }
	bool isCycle(int V, vector<int>adj[])
	{
	     vector<bool>visited(V,false);
	     for(int i=0;i<V;i++){
	         if(!visited[i]){
    	         if(checkForCycle(i,-1,adj,visited))
    	            return true;
	         }          
	     }
	     return false;
	}
};
