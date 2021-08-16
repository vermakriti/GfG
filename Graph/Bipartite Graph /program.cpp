// To check odd length cycle using graph coloring method (BFS)

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

// using DFS
class Solution{
    public:
        bool dfs(int node,vector<int>adj[],vector<int>&color){
            
            if(color[node]==-1)
                color[node]=1;
            for(auto child:adj[node]){
                if(color[child]==-1){
                    color[child]=1-color[node];
                    if(!dfs(child,adj,color))
                        return false;
                }
                else if(color[child]==color[node])
                    return false;
            }
            return true;
        }
        bool isBipartite(int V, vector<int>adj[]){
           
           vector<int> color(V,-1);
           for(int i=0;i<V;i++){
               if(color[i]==-1){
                   if(!dfs(i,adj,color)){
                       return false;
                   }     
               }
           }
           return true;
        }

};