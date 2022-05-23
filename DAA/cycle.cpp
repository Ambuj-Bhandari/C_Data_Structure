#include<bits/stdc++.h>
using namespace std;
void addedge(vector<int> a[],int u,int v)
{
	a[u].push_back(v);
	a[v].push_back(u); 
}
bool cycle(vector<int> a[],int s,int p,int *v)
{ 
	v[s]=1;
	for(auto it=a[s].begin();it!=a[s].end();it++)
	{
		if(v[*it)==0]
		{
			if(cycle(a,it,s,v))
				return true;
		}
	}
	return false;
} 
bool dfs(vector<int>a[],int n)
{
	int v[n]={0};
	for(int i=0;i<n;i++)
	{
		if(!v[i])
		{
			if(cycle(a,i,-1,v))
				return true;
		}
	}
	return false;
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
	/*cout<<"Enter source node and destination node:";
	cin>>s>>d;*/
	
	if(ffs(a,n))
	{
		cout<<"There Exist a Path\n";
	}
	else
	{
		cout<<"There don't Exist a Path\n";
	}
	return 0;
}
