#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
bool cycle_bfs(int v,vector<int>adj[])
{
	vector<int>vis(v+1,0);


	for(int i=1;i<=v;i++)
	{
		if(!vis[i])
		{
			queue<pair<int,int>>q;
			q.push({i,-1});
			vis[i]=1;
			while(!q.empty())
			{
				int node=q.front().first;
				int prev=q.front().second;
				q.pop();

			//cout<<node;
		
			for(auto it : adj[node])
				{
					if(!vis[it])
					{
						q.push({it,node});
						vis[it]=1;
					}
					else if(it!=prev)
					return true;
				}
			}
			
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
		
			if(cycle_bfs(n,adj))
			cout<<"true";
			else
			cout<<"false";
		
	
	return 0;
}