#include<stdio.h>
#include<stdlib.h>
struct node
{
	int a;
	struct node *next; 
}; 
struct node *recinsert(struct node *ptr,int n,int f)
{ 
     
	if(ptr==NULL)
	return 0;
	else
	{
		if(ptr->a==n)
		{
		   struct node *t;
     	   t=(struct node *)malloc(sizeof(struct node));
     	   printf("Enter the data: ");
     	   scanf("%d",&t->a); 
		   if(f==0)
		   { 
		      t->next=ptr; 
		      ptr=t; 
		   } 
		   else
		   {
		      t->next=ptr->next; 
		      ptr->next=t; 
		   }
		}
		else
		{
		   ptr->next=recinsert(ptr->next,n,f); 
		}  
	}
	return ptr;
}
void  insert(
int main()
{
	struct node *f=NULL,*r=NULL; 
	int ch;
     do
     {
     	printf("Enter\n1. To insert\n2. To delete\n3. To display\n4. To exit\n");
     	printf("Enter your choice\n");
     	scanf("%d",&ch);
     	if(ch==1)
     	{ 
     	  enqueue(&f,&r);
     	} 
     	else if(ch==2)
     	{ 
     	  dequeue(&f,&r);
     	} 
     	else if(ch==3)
     	{
     	  disp(f); 
     	} 
     	else
     	{
     	  printf("Exiting.....");
     	} 
     }while(ch!=4); 
     return 0; 
} 
