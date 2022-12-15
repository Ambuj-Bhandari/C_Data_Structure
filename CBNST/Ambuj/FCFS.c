#include<stdio.h>
#include<math.h>
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
	for(int i=0;i<n;i++)
	{
		s=s+abs(p1-a[i]);
		p1=a[i];
		printf("Value of pointer: %d\n",p1);
	}
	printf("\nSeek Distance = %d\n",s);
	return 0;
}
	
