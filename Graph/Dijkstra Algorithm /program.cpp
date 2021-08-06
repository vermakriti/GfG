class Solution{
    public:
    #define pii pair<int,int>
    void dijkstra(int s,vector<vector<int>> adj[],vector<int> &dist, vector<bool> &processed){
        
        dist[s]=0;
        priority_queue<pii,vector<pii>,greater<pii>> pq;
        pq.push({0,s});
        
        while(!pq.empty()){
            
            auto t=pq.top();
            pq.pop();
            if(processed[t.second])continue;
            
            for(auto v:adj[t.second]){
                if(t.first+v[1]<dist[v[0]] && processed[v[0]]==false){
                    dist[v[0]]=t.first+v[1];
                    pq.push({dist[v[0]],v[0]});
                }
            }
            processed[t.second]=true;
        }
        
    }
    
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S) {
       vector<int> dist(V,INT_MAX);
       vector<bool> processed(V,false);
       dijkstra(S,adj,dist,processed);
       return dist;
    }
};
