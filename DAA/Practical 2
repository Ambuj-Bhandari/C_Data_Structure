#include<bits/stdc++.h>
using namespace std;
bool BinaryS(int a[],int key,int l,int h,int &nc)
{
    while(l<=h)
    {
        int m=l+(h-l)/2;
	nc++;
        if(key==a[m])
            return true; 
        else if(key>a[m])
            l=m+1; 
        else
            h=m-1;
    } 
    return false;
}
int main()
{ 
	int n,key,nc=0,t; 
   cin>>t; 
   while(t!=0)
   {

      cout<<"Enter the Size of array:";
      cin>>n;
      int a[n];
      cout<<"Enter the Array in sorted form\n";
      for(int i=0;i<n;i++)
        cin>>a[i]; 
    
      cout<<"Enter the key to be searched:";
      cin>>key; 
      if(BinaryS(a,key,0,n-1,nc))
        cout<<"Key is present"<<endl;
      else
        cout<<"Key is absent"<<endl; 
      cout<<"Total Number of comaparisions:"<<nc<<endl; 
      t--;
   }
	   return 0;
}
	
