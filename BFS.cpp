https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/tutorial/

#include<bits/stdc++.h>
#include<queue>
#include<vector>
#include<queue>
using namespace std;
vector <int> vec[100010];
queue <int> q;
int vis[100020]={0},st,en,lev[100010]={0};


int bfs(int i,int x)
{
	int cnt=0;
	q.push(i);
	vis[i]=1;
	lev[1]=1;
	if(lev[1]==x)
	{
	    //cout<<vec[node][i]<<endl;
	    ++cnt;
	}
	while(!q.empty())
	{
		int node=q.front();
		q.pop();
		for(i=0;i<vec[node].size();++i)
		{
			if(vis[vec[node][i]]==0)
			{
				lev[vec[node][i]]=lev[node]+1;
				if(lev[vec[node][i]]==x)
				{
				    ++cnt;
				}
				q.push(vec[node][i]);
				vis[vec[node][i]]=1;
			}
			
		}
	}
	return cnt;
}
int main()
{
	int n,x,i=0,ans;										
	scanf("%d",&n);
	while(i<n-1)
	{
		scanf("%d %d",&st,&en);
		vec[st].push_back(en);
		vec[en].push_back(st);
		++i;
	}
	cin>>x;
	ans=bfs(1,x);
	cout<<ans<<endl;
	return 0;
}