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
		q.pop();
		cout<<u<<" ";	
		for(auto it=a[u].begin();it!=a[u].end();it++)
        {
            if(v[*it]!=1)
            {
                q.push(*it);
                v[*it]=1;
            }
        }
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
		addedge(a,i-1,i);
	} 
	cout<<"Enter source node:";
	cin>>s;
	
	bfs(a,n,s);
	return 0;
}
	
