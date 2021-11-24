#include<stdio.h>
#include<stdlib.h>
struct node
{
	int a;
	struct node *next; 
}; 
void enqueue(struct node **f,struct node **r)
{  
    struct node *p; 
    p=(struct node *)malloc(sizeof(struct node)); 
    printf("Enter the data: ");
    scanf("%d",&p->a);
    p->next=NULL;
	if(*r==NULL)
	{
	 *f=*r=p;
	}
	else
	{ 
	   (*r)->next=p;
	   *r=p;
	} 
}
void dequeue(struct node **f,struct node **r)
{
  struct node *temp;
  if(*f==NULL)
  printf("The List is Empty!!!");
  else
  { 
     	 temp=*f;
     	 (*f)=(*f)->next;
     	 free(temp);
   } 
} 
void disp(struct node *t)
{
   while(t!=NULL)
   {
   	printf("%d \n",t->a);
   	t=t->next;
   } 
}
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
