#include<bits/stdc++.h>
using namespace std;
int jump(int a[],int n,int k)
{
 	if(a[0]==k)
	{
	    return 0;
	}
         int i=1;
	while(i<n)
	{
	    if(a[i]>=k)
             break;
           i=i*2;
            
        } 
        if(i>n)
	i=n;
	
        //linear search. Binary search can also be applied
	for(int j=i/2;j<=i;j++)
	{
	   if(a[j]==k)
		return j;
        } 
	return -1;
} 
int main()
{ 
   int n;
   int k;
   cout<<"Enter the number of elements: ";
   cin>>n;
   int a[n];
  
   for(int i=0;i<n;i++)
   {
	cin>>a[i];
   }
   cin.ignore(256,'\n');
     cout<<"Enter a key:";
   cin>>k;
   int l=jump(a,n,k);
   if(l==-1)
      cout<<"\nAbsent\n";
   else
      cout<<"\npresent at location: "<<l+1<<"\n";  
   return 0;
}
