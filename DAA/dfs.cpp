#include<bits/stdc++.h>
using namespace std;
void addedge(vector<int> a[],int u,int v)
{
	a[u].push_back(v);
	a[v].push_back(u); 
}
void dfs(vector<int> a[],int *v,int s)
{ 
	cout<<s<<" ";
	v[s]=1; 
	for(auto it=a[s].begin();it!=a[s].end();it++)
	{
		if(v[(*it)]!=1)
		{
			dfs(a,v,(*it));	
		} 
	}
} 
int main()
{ 
	int n,s,d;
	cout<<"Enter the number of vertices:";
	cin>>n;
	vector<int> a[n];
	int v[n]={0};
	addedge(a,1,0);
	addedge(a,1,2);
	addedge(a,2,3);
	addedge(a,3,4);
	cout<<"Enter source node:";
	cin>>s;
	dfs(a,v,s);
	
	return 0;
}
