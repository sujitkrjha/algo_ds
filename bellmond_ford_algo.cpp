//Shortest path algorithm
//Aim to find the shortest distance from source node to every other node
//Checks for there is no negative weight cycle in the graph 
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define pb push_back
#define mp make_pair
#define MAX 2000000009
vector<int> graph[55];
int dist[110]={0},start[110]={0};
int t,v,e,i,k,st,en,weight;
int parent[110]={-1};
bool flag = true;
void initialize(int arr[])
{
	for(int j=1;j<=v;++i)
	{
		dist[j]=MAX;
	}
}

void shortestPath(int a, int b)
{
	if(dist[b] > dist[a] + graph[a][1])
	{
		flag = true;
		dist[b] = dist[a] + graph[a][1];
		parent[b] = a;
	}
}

int main()
{
	
	cin>>t;
	while(t--)
	{
		memset(start, 0 ,110*4);
		flag = true;
		initialize(dist);
		cin>>v>>e;
		for(i=0;i<e;++i)
		{
			scanf("%d %d %d ",&st,&en,&weight);
			graph[i].pb(st);
			graph[i].pb(en);
			graph[i].pb(weight);
		}
		cout<<"here"<<endl;
		for(i=0;i<v;++i)
		{
			for(k=0;k<e;++k)
			{
				shortestPath(graph[k][0], graph[k][1]);
			}
			if(i==v-1)
			{
				flag = false;
			}
		}
		cout<<"herenow"<<endl;
		if(flag == true)
			cout<<"1"<<endl;
		else
			cout<<"0"<<endl;
		for(i=0;i<e;++i)
			graph[i].clear();
	}
	return 0;
}