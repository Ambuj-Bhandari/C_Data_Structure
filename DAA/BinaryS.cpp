#include<bits/stdc++.h>
using namespace std;
bool BinaryS(int a[],int key,int l,int h)
{
    while(l<=h)
    {
        int m=l+(h-l)/2;
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
	int n,key;
    cout<<"Enter the Size of array:";
    cin>>n;
    int a[n];
    cout<<"Enter the Array in sorted form\n";
    for(int i=0;i<n;i++)
        cin>>a[i]; 
    
    cout<<"Enter the key to be searched:";
    cin>>key; 
    if(BinaryS(a,key,0,n-1))
        cout<<"Key is present";
    else
        cout<<"Key is absent";
	return 0;
}
	
