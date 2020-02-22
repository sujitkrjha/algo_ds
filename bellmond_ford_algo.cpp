//Shortest path algorithm
//Aim to find the shortest distance from source node to every other node
//Checks for there is no negative weight cycle in the graph
// Complexity is O(v.E)
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define pb push_back
#define mp make_pair
#define MAX 2000000009

vector<int> graph[55];
int dist[110]={0},parent[110]={-1};
int v,e;
bool flag = true;

void initialize(int arr[])
{
	for(int j=1;j<v;++j)
	{
		dist[j]=MAX;
	}
}

void shortestPath(int a, int b)
{
	if(dist[b] > dist[a] + graph[a][2])
	{
		flag = true;
		dist[b] = dist[a] + graph[a][2];
		parent[b] = a;
	}
}

int main()
{
	int t,i,k,st,en,weight;
	cin>>t;
	while(t--)
	{
		flag = true;
		cin>>v>>e;
		initialize(dist);
		for(i=0;i<e;++i)
		{
			scanf("%d %d %d ",&st,&en,&weight);
			graph[i].pb(st);
			graph[i].pb(en);
			graph[i].pb(weight);
		}
		for(i=0;i<v;++i)
		{
			for(k=0;k<e;++k)
			{
				shortestPath(graph[k][0], graph[k][1]);
			}
			if(i==v-2)
			{
				flag = false;
			}
		}
		if(flag == true)
			cout<<"1"<<endl;
		else
			cout<<"0"<<endl;
		for(i=0;i<e;++i)
			graph[i].clear();
		dist[0]=0;
	}
	return 0;
}