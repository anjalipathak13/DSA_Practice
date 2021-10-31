#include<bits/stdc++.h>

using namespace std;
void topo_dfs(int node,vector<int>&vis,vector<int>adj[],stack<int>&s)
{
	vis[node]=1;
	//s.push(node);
	for(auto it : adj[node])
	{
	if(!vis[it])
	
  topo_dfs(it,vis,adj,s);
	}
	
	s.push(node);	
	
}
vector<int>dfs(int v,vector<int> adj[])
{
	vector<int>storedfs;
		stack<int>s;
	vector<int>vis(v,0);
	for(int i=0;i<v;i++)
	{
		if(!vis[i])
		topo_dfs(i,vis,adj,s);
		
	}
	while(!s.empty())
	{
		
		storedfs.push_back(s.top());
		s.pop();
		
	}
	return storedfs;
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
		//adj[v].push_back(u);
	}
			vector<int>dfs1;
			dfs1=dfs(n,adj);
			for(int i=0;i<dfs1.size();i++)
			{cout<<dfs1[i];
			}
		
	
	return 0;
}