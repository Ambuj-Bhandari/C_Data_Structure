#include<bits/stdc++.h>
using namespace std;
void addedge(vector<int> a[],int u,int v)
{
	a[u].push_back(v);
	a[v].push_back(u); 
}
bool bfs(vector<int> a[],int s,int d,int n)
{ 
	if(s==d)
	return(true);
	queue<int> q;
	int v[n]={0};
	q.push(s);
	v[s]=1;
	while(!q.empty())
	{
		int u=q.front();
		q.pop();
		for(auto it=a[u].begin();it!=a[u].end();it++)
        	{ 
			if((*it)==d)
			{
				return(true);
			}
            		if(v[*it]!=1)
            		{
               		   q.push(*it);
                	   v[*it]=1;
            		}
        	}
	} 
	return(false);
} 
int main()
{ 
	int n,s,d;
	cout<<"Enter the number of vertices:";
	cin>>n;
	vector<int> a[n];
	for(int i=1;i<n;i++)
	{
		addedge(a,i-1,i);
	} 
	cout<<"Enter source node and destination node:";
	cin>>s>>d;
	
	if(bfs(a,s,d,n))
	{
		cout<<"There Exist a Path\n";
	}
	else
	{
		cout<<"There don't Exist a Path\n";
	}
	return 0;
}
