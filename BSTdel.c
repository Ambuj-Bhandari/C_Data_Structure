#include<stdio.h>
#include<stdlib.h>
struct tree{ 
        int a;
        struct tree *left,*right;
        }; 
struct tree* create(int x)
{
   struct tree *t;
   t=(struct tree *)malloc(sizeof(struct tree));
   if(t==NULL)
   printf("No Memory Allocated\n");
   else
   {
      t->a=x;
      t->left=NULL;
      t->right=NULL;
   }
   return t; 
} 
struct tree* insert(struct tree *r,int x)
{
   
   if(r==NULL)
   return(create(x)); 
   else if(x>r->a)
   {
     r->right=insert(r->right,x);
   }
   else
   {
     r->left=insert(r->left,x);
   } 
   return r;
} 
struct tree* delete(struct tree *r,int k)
{ 
   struct tree *temp;
   if(r==NULL)
   return r;
    
   if(k<r->a)
   { 
     r->left=delete(r->left,k);
   } 
   
   else if(k>r->a)
   {
     r->right=delete(r->right,k);
   } 
   else
   {
     if(r->left==NULL)
     {
       temp=r->right;
       free(r);
       return temp;
     } 
     else if(r->right==NULL)
     {
        temp=r->left;
        free(r);
        return temp;
     } 
     temp=r->right;
     while(temp&&temp->left!=NULL)
     {
        temp=temp->left;
     } 
     r->a=temp->a;

     r->right=delete(r->right,temp->a);    
   }
   return r;
}
void inorder(struct tree *r)
{
   if(r==NULL)
   return; 
   else
   {
      inorder(r->left);
      printf("%d ",r->a);
      inorder(r->right);
   } 
} 

int main()
{
   struct tree *root=NULL;
   int ch,x,c;
   do
   {
      printf("Enter\n1.To insert\n2.Delete\n3.Display\n4.To exit\n");
      printf("Enter your choice: ");
      scanf("%d",&ch);
      if(ch==1)
      {
         printf("Enter The Data: ");
         scanf("%d",&x);
         if(root==NULL)
         {
           root=insert(root,x);
         } 
         else
         {
            root=insert(root,x);
         } 
      }
       
      else if(ch==2)
      { 
         printf("Enter thew data to be deleted: ");
         scanf("%d",&c);
         root=delete(root,c); 
         printf("Data Deleted!!\n\n");
      } 
       
      else if(ch==3)
      {
         inorder(root);
         printf("\n");
      } 
      else 
      {
         printf("Exiting......\n");
      } 
   }while(ch!=4);
   return 0;
}        

