 #include<bits/stdc++.h>

using namespace std;
bool check(int node,vector<int>adj[],int vis[],int dfsvis[])
{  
  vis[node]=1;
  dfsvis[node]=1;
  for(auto it : adj[node])
  {
  	if(!vis[it])
  	{
  		if(check(it,adj,vis,dfsvis))
  		return true;
	  }
	 else if(dfsvis[it])
	  {
	  	return true;
	  }
  	
  	
  }dfsvis[node]=0;
return false;
}
bool cycle_dfs(int v,vector<int> adj[])
{
	int vis[v],dfsvis[v];
	memset(vis,0,sizeof vis);
	memset(dfsvis,0,sizeof dfsvis);
	
	
	for(int i=1;i<=v;i++)
	{
		if(!vis[i]){
		if(check(i,adj,vis,dfsvis))
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
	//	adj[v].push_back(u);
	}
			if(cycle_dfs(n,adj))
			cout<<"true";
			else
			cout<<"false";
		
	
	return 0;
}