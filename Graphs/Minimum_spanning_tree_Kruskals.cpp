// https://www.hackerearth.com/practice/algorithms/graphs/minimum-spanning-tree/tutorial/

// Algorith:
// Step 1: Sort the edges of graph w.r.t their weights.
// Step 2: Start adding edges to the Minimum Spanning Tree from the edges with the smallest weight until the edges to the largest weight.
// Step 3: Only add edges which doesn't form a cycle, edges which are part of disconnected componenets.

// To check if nodes are part of disconnected components use: 
// Disjoint sets .
// Can also be solved using DFS.


// Time Complexity: O(edges * log(nodes))
// In Kruskal’s algorithm, most time consuming operation is sorting because the total complexity of the Disjoint-Set operations will be O(edges * log(nodes)), which is the overall Time Complexity of the algorithm.



#include<bits/stdc++.h>
#include<algorithm>
#include<utility>
using namespace std;
int id[10010]={0};
pair<long long, pair<int,int>> graph[100010];
void initialize(int arr[],int n)
{
	for(int i=0;i<n;i++){
		arr[i]=i;
	}
}
int root(int num)
{
	while(id[num] != num)
	{
		num=id[num];
	}
	return num;
}
void do_union(int x, int y)
{
	int a = root(x);
	int b = root(y);
	id[a] = id[b];
}
long long kruskals_algo(pair<long long, pair<int, int>> gr[], int edges)
{
	int x,y;
	long long cost,min_cost;
	cost=min_cost=0ll;
	for(int i=0;i<edges;i++){
		x = gr[i].second.first;
		y = gr[i].second.second;
		cost = gr[i].first;
		if(root(x)!=root(y)){
			min_cost += cost;
			do_union(x,y);
		}
	}
	return min_cost;
}
int main()
{
	int t,nodes,edges,st,en;
	long long wt,min_cost;
	min_cost=0ll;
	cin>>t;
	while(t--){
		memset(id,0,sizeof(id));
		cin>>nodes>>edges;
		initialize(id,nodes);
		for(int i=0;i<edges;i++){
			cin>>st>>en>>wt;
			graph[i]=make_pair(wt,make_pair(st,en));
		}
		sort(graph,graph+edges);
		min_cost = kruskals_algo(graph, edges);
		cout<<min_cost<<endl;
	}
	return 0;
}
