
#include<bits/stdc++.h>

using namespace std;
bool recdfs(int node,int prev,vector<int>&vis,vector<int>adj[])
{  
    
	vis[node]=1;
//	storedfs.push_back(node);
	for(auto it : adj[node])
	{
	if(vis[it]==0){
	if(recdfs(it,node,vis,adj))
	    return true;}
	else if(it!=prev)
	return true;
	
}
return false;
}
bool cycle_dfs(int v,vector<int> adj[])
{
	vector<int>vis(v+1,0);
	for(int i=1;i<=v;i++)
	{
		if(!vis[i]){
		if(recdfs(i,-1,vis,adj))
		return true;
		}
	}
	return false;
}
int main()
{
	int n;
	int m;
	cin>>n>>m;
	vector<int>adj[n+1];
	for(int i=0;i<m;i++)
	{
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
			if(cycle_dfs(n,adj))
			cout<<"true";
			else
			cout<<"false";
		
	
	return 0;
}