#include<iostream>
using namespace std;
int find_max(int a[],int n)
{
	int m=a[0];
	for(int i=1;i<=n;i++)
	{
		if(m<a[i])
		m=a[i];
	}
	return(m);
}
void CountS(int a[],int h)
{
	int max=find_max(a,h);
	int b[max]={0};
	int c[h+1];
	for(int i=0;i<=h;i++)
	{
		b[a[i]]++;
	}
	for(int i=1;i<=max;i++)
	{
		b[i]=b[i]+b[i-1];
	}
	for(int i=h;i>=0;i--)
	{
		int pos=b[a[i]];
		c[pos-1]=a[i];
		b[a[i]]--;
	}
	for(int i=0;i<=h;i++)
	{
		a[i]=c[i];
	}
}
int main()
{
	int a[]={5,2,7,1,2};
	CountS(a,4);
	cout<<"The sorted array is:"<<"\n";
	for(int i=0;i<5;i++)
	cout<<a[i]<<" ";
}
  	
