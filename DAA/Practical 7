#include <iostream>
using namespace std;
void InsertionSort(int a[],int n,int *sh,int *co)
{
    int i,j,temp;
    for(i=1;i<n;i++){
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp){
            a[j+1]=a[j];
            j--; 
            (*co)++;
            (*sh)++;
        }
        a[j+1]=temp; 
        (*sh)++;
    }
}

int main()
{
    int n; 
    int sh=0,co=0;
    cout<<"Enter the no of elements: \n";
    cin>>n;
    
    int a[n];
    cout<<"Enter the elements: \n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    InsertionSort(a,n,&sh,&co);
    
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\nComparisons: "<<co<<"\n";
    cout<<"Shifts: "<<sh;
    return 0;
}
