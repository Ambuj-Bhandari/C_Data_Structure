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
	int b[max+1]={0};
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
    int n,k; 
    cout<<"Enter the number of elements:";
    cin>>n;
    int a[n]; 
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++)
        cin>>a[i];

	CountS(a,n-1);  
	cout<<"Enter the value of k: ";
    	cin>>k;
	cout<<"Kth Smallest element: "<<a[k-1]<<"\n";
    	cout<<"Kth largest element: "<<a[n-k-1]<<"\n";
	return 0;
}
  	
