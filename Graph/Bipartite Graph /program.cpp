// To check odd length cycle using graph coloring method

class Solution {
public:
    bool bfs(int i,vector<int>adj[],vector<int>&color){
        
        queue<int> q;
        q.push(i);
        color[i]=1;
        
        while(!q.empty()){
            
            int node=q.front();
            q.pop();
            
            for(auto j:adj[node]){
                if(color[j]==-1){
                    color[j]=1-color[node];
                    q.push(j);
                }
                else if(color[j]==color[node])
                    return false;
            }
        }
        return true;
    }
	bool isBipartite(int V, vector<int>adj[]){
	    
	    vector<int>color(V,-1);
	    for(int i=0;i<V;i++){
	        if(color[i]==-1){
	            if(!bfs(i,adj,color))
	                return false;
	        }
	      
	    }
	    return true;
	}

};
