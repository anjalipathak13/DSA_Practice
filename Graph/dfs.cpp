/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<bits/stdc++.h>

using namespace std;
void recdfs(int node,vector<int>&vis,vector<int>adj[],vector<int>&storedfs)
{
	vis[node]=1;
	storedfs.push_back(node);
	for(auto it : adj[node])
	{
	if(!vis[it])
	recdfs(it,vis,adj,storedfs);
	}
}
vector<int>dfs(int v,vector<int> adj[])
{
	vector<int>storedfs;
	vector<int>vis(v+1,0);
	for(int i=1;i<=v;i++)
	{
		if(!vis[i])
		recdfs(i,vis,adj,storedfs);
		
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
		adj[v].push_back(u);
	}
			vector<int>dfs1;
			dfs1=dfs(n,adj);
			for(int i=0;i<dfs1.size();i++)
			{cout<<dfs1[i];
			}
		
	
	return 0;
}