#include<stdio.h>
#include<limits.h>
#include<math.h>
int check(int *ind,int n)
{
	for(int i=0;i<n;i++)
	{
		if(ind[i]!=1)
			return 0;
	}
	return 1;
}
int main()
{
	int n,p1,s=0;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int a[n];
	int ind[n];
	printf("Enter the array: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		ind[i]=-1;
	}
	
	
	printf("Enter the initial value of pointer: ");
	scanf("%d",&p1);
	printf("\n");
	int mn=INT_MAX;
	int pos=0;
	while(1)
	{
		for(int i=0;i<n;i++)
		{
			if(abs(p1-a[i])<mn && ind[i]==-1 )
			{
				 mn=abs(p1-a[i]);
			      pos=i;
			}
		}
		s=s+mn;
		ind[pos]=1;
		p1=a[pos];
		printf("Value of pointer selected: %d\n",p1);
		mn=INT_MAX;
		if(check(ind,n))
			break;
	}
	printf("\nSeek Distance = %d\n",s);
	return 0;
}
	
