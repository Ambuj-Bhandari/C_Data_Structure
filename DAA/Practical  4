#include<bits/stdc++.h>
using namespace std;
int BinaryS(int a[],int key,int l,int h,int s)
{ 
    int r=-1;
    while(l<=h)
    {
        int m=l+(h-l)/2;
        if(key==a[m]) 
        {
            r=m;
            if(s) 
            {
                h=m-1;
            }
            else
            {
                l=m+1;
            } 
        }
        else if(key>a[m])
            l=m+1; 
        else
            h=m-1;
    } 
    return r;
}
int main()
{ 
	int n,key;
    cout<<"Enter the Size of array:";
    cin>>n;
    int a[n];
    cout<<"Enter the Array in sorted form\n";
    for(int i=0;i<n;i++)
        cin>>a[i]; 
    
    cout<<"Enter the key to be searched:";
    cin>>key; 
    int f=BinaryS(a,key,0,n-1,1);
    int l=BinaryS(a,key,0,n-1,0); 
    if(f!=-1)
        cout<<"Key is present "<<(l-f)+1<<" times";
    else
        cout<<"Key is not present";
	return 0;
}
	
