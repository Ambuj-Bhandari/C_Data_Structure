#include<stdio.h>
struct info{
	int max[100],allocated[100],need[100];
}; 
void input(struct info *p,int *a,int n,int r)
{
	for(int i=0;i<n;i++)
	{
		printf("For Process %d Enter the Maximum Need: ",i+1);
		for(int j=0;j<r;j++)
			scanf("%d",&p[i].max[j]);
		
		printf("Enter the Allocated Resources: ");
		for(int j=0;j<r;j++)
		{
			scanf("%d",&p[i].allocated[j]);
			
			p[i].need[j]=p[i].max[j]-p[i].allocated[j];
		}
	}
	printf("Enter the Available Resources: ");
	for(int i=0;i<r;i++)
		scanf("%d",&a[i]);
} 
void print(struct info *p,int *a,int n,int r)
{
	printf("ProcessID\tMax\tAllocated\tNeed\n");
	for(int i=0;i<n;i++)
	{
		printf("P %d\t\t",i);
		for(int j=0;j<r;j++)
		{
			printf("%d",p[i].max[j]);
		}
		printf("\t");
		for(int j=0;j<r;j++)
		{
			printf("%d",p[i].allocated[j]);
		}
		printf("\t\t");
		for(int j=0;j<r;j++)
		{
			printf("%d",p[i].need[j]);
		}
		
		printf("\n");
	}
} 
int main()
{ 
	int n,r;
	printf("Enter the number of Processes: ");
	scanf("%d",&n);
	
	printf("Enter the number of Resources: ");
	scanf("%d",&r);
	 
	int avail[r];
	struct info p[n];
	input(p,avail,n,r);
	
	print(p,avail,n,r);
	return 0;
}
	
	
	
	
	
	
