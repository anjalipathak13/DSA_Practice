#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<int>bfs(int v,vector<int>adj[])
{
	vector<int>bfs;
	vector<int>vis(v+1,0);


	for(int i=1;i<=v;i++)
	{
		if(!vis[i])
		{
			queue<int>q;
			q.push(i);
			vis[i]=1;
			while(!q.empty())
			{
				int node=q.front();
				q.pop();
				bfs.push_back(node);
		
			for(auto it : adj[node])
				{
					if(!vis[it])
					{
						q.push(it);
						vis[it]=1;
					}
				}
			}
		}
	}
	return bfs;
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
			vector<int>bfs1;
			bfs1=bfs(n,adj);
			for(int i=0;i<bfs1.size();i++)
		       {cout<<bfs1[i];
			}
		
	
	return 0;
}