#include<stdio.h> 
void merg(int a[],int l,int h,int m,int *c)
{
	int i=0,j=m+1,k=0;
	int b[h-l+1];
	while(i<=m&&j<=h)
	{
		if(a[i]<a[j])
		   b[k++]=a[i++];
		else
                   a[k++]=a[j++];  
                (*c)++;
                 
         } 
	if(i==m)
	{
		for(;j<=h;j++)
		b[k++]=a[j];
	}
	else
	{
		for(;i<=m;i++)
		b[k++]=a[i];
	}  
	int o=0;
 	for(int f=l;f<=h;f++)
            a[f]=b[o++];
}
			
void mergS(int a[],int l,int h,int *c)
{
	while(l<h)
	{
		int m=l+(h-l)/2;
		mergS(a,l,m);
		mergS(a,m+1,h);
		merg(a,l,h,m,c);
	}
}

int main()
{     
        int n,c=0;
	printf("Enter the Number of elements: ");
	scanf("%d",&n);
	int a[n];
	
	printf("Enter the elements: \n");
	for(int i=0;i<n;i++)
	  scanf("%d",&a[i]); 
	
	mergS(a,0,n-1,&c); 
	printf("The Sorted Array:\n");
	for(int i=0;i<n;i++)
	printf("%d ",a[i]);

	printf("No. of Comparisons: %d",c);
}
}
	

