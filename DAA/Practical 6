#include<bits/stdc++.h> 
using namespace std;
int twodiff(int a[], int n,int target) {
        int c=0;
        for(int i=0;i<n;i++)
        {
           for(int j=i+1;j<n;j++) 
           {
               if(a[i]-a[j]==target||a[j]-a[i]==target)
               {    
                   c++;
               }
           }
            
        }
        
    return c;  
    }
int main()
{
    int n,key;
    cout<<"Enter the size of array:";
    cin>>n;
    int a[n];
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++)
      cin>>a[i];
   
   cout<<"Enter the key:";
   cin>>key;
    cout<<twodiff(a,n,key); 
    
    return 0;
}
