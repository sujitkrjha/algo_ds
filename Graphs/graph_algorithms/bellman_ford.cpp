// This algorithm can be used on both weighted and unweighted graphs.
// Can find shortest path for negative edge weight graphs.
// Bellman-Ford can also detect negative cycles which is a useful feature.
// Negative cycles are those cycles whose weights sum is -ve.
// We cannot find a shortest path for undirected -ve edge weight graph.
// Exterior loop runs for v-1 times where v is the number of vertices.
// Worst time complexity O(V*E).
// Best Time complexity O(E).

#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#define MAX_VERTICES 10010
using namespace std;

vector<int> graph[MAX_VERTICES];
int dis[MAX_VERTICES + 10] = {0};

void initialize(int dis[],int n)
{
	dis[1]=0;
	for(int i=2;i<=n;i++)
	{
		dis[i] = INT_MAX;
	}
}
void bellmond_ford(int vertices, int edges){
	// To check if edges is updated for each exterior loop iteration
	bool diff_check;
	// To check for negative weight cycle we will iterate for 0 to vertices - 1 times and if diff_check == true
	// i.e, vertices distances are updated in last loop, then graph contains a negative weight cyclic and shortest path cannot be found.
	for(int i=0;i< vertices-1;i++)
	{
		diff_check = false;
		for(int j=0;j<edges;j++)
		{
			if(diff_check == false && i>0)
				return ;
			int u,v,w;
			u = graph[j][0];
			v = graph[j][1];
			w = graph[j][2];
			if(dis[u]+w<dis[v])
			{
				diff_check = true;
				dis[v]=dis[u]+w;
			}
		}
		cout<<endl;
	}
}
int main(){
	int vertices,edges,st,en,wt,i;
	int destination;
	i=0;
	cin>>vertices>>edges;
	initialize(dis,vertices);
	while(i<edges)
	{
		cin>>st>>en>>wt;
		graph[i].push_back(st);
		graph[i].push_back(en);
		graph[i].push_back(wt);
		i++;
	}
	bellmond_ford(vertices,edges);
	for(int i=2;i<=n;i++)
	{
		dcout<<is[i]<<" ";
	}
	// cin>>destination;
	// cout<<dis[destination]<<endl;
	return 0;
}

