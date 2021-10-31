#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void bfs(int v,vector<int>adj[])
{
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

			cout<<node;
		
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
		
			bfs(n,adj);
		
		
	
	return 0;
}