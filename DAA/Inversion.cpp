#include<iostream>
using namespace std;
void inver(int a[],int n)
{ 
	int v=0;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			v++;
		}
	}
	cout<<"Total no. of inversions: "<<v;
}
int main()
{
	int a[]={8,4,2,1};
	int n=sizeof(a)/sizeof(a[0]);
	inver(a,n);
	return 0;
}
