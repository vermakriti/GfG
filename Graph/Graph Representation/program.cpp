// undirected unweighted graph
#include<bits/stdc++.h>
using namespace std;

int main(){

	int V,E;
	cin>>V>>E;
	vector<int> adj[V+1];
	for(int i=0;i<E;i++){
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
}

// undirected weighted graph
#include<bits/stdc++.h>
using namespace std;

int main(){

	int V,E;
	cin>>V>>E;
	vector<pair<int,int>> adj[V+1];
	for(int i=0;i<E;i++){
		int u,v>>wt;
		cin>>u>>v>>wt;
		adj[u].push_back({v,wt});
		adj[v].push_back({u,wt});
	}
}