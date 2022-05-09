#include<bits/stdc++.h>
using namespace std;
void addedge(vector<int> a[],int u,int v)
{
	a[u].push_back(v);
	a[v].push_back(u); 
}
void bfs(vector<int> a[],int n,int s)
{
	queue<int> q;
	int v[n]={0};
	q.push(s);
	v[s]=1;
	while(!q.empty())
	{
		int u=q.front();
		
		cout<<*it;	
		delete u;
	}
} 
int main()
{ 
	int n,s;
	cout<<"Enter the number of vertices:";
	cin>>n;
	vector<int> a[n];
	for(int i=1;i<n;i++)
	{
		addegde(a,i-1,i);
	} 
	cout<<"Enter source node:";
	cin>>s;
	
	bfs(a,n,s);
	return 0;
}
	
