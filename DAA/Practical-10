#include<iostream>
using namespace std;
int merg(int a[],int l,int h,int m,int &co)
	{
		int i=l,j=m+1,k=l; 
		int in=0;
		int b[h+l+1];
		while(i<=m&&j<=h)
		{
			if(a[i]<=a[j])
			{
		   		b[k]=a[i];
		   		k++;
		   		i++;
			}
			else
			{
                b[k]=a[j];
		   		k++;
		   		j++;
			} 
			in+=(m-i); 
            co++;
                 
        }
		if(i>m)
		{
			for(;j<=h;j++)
			{
				b[k]=a[j];
				k++;
			}
		}
		else
		{
			for(;i<=m;i++)
			{
				b[k]=a[i];
				k++;
			}
		}
 		for(k=l;k<=h;k++)
		{
            a[k]=b[k];
		}
		return(in);

	} 
int MergeS(int a[],int l,int h,int &co)
{ 
		int inv=0;
		if(l<h)
		{ 
			int m=l+(h-l)/2;
			inv+=MergeS(a, l, m,co);
			inv+=MergeS(a,m+1,h,co);
			inv+=merg(a,l,h,m,co);
		} 
		return(inv);
} 
int main()
{ 
		int inversion=0,n,co=0;
		cout<<"Enter the number of elements:"; 
		cin>>n;
		int a[n];
		cout<<"Enter the elements:";
		for(int i=0;i<n;i++)
			cin>>a[i];
	
		inversion=MergeS(a,0,n-1,co);
		cout<<"The sorted array:";
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<"\nTotal no. of inversions: "<<inversion;
        cout<<"\nTotal no. of comparisons: "<<co; 
        return 0;
}
