#include<bits/stdc++.h> 
using namespace std;
void printIntersection(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j])
            i++;
        else if (arr2[j] < arr1[i])
            j++;
        else 
        {
            cout << arr2[j] << " ";
            i++;
            j++;
        }
    }
}
int main()
{
    int n,m; 
    cout<<"Enter the size of array 1: ";
    cin>>m;
    int a[m];
    cout<<"Enter the elements of Array 1: ";
    for(int i=0;i<m;i++){
        cin>>a[i];
    } 
    cout<<"Enter the size of array 2: ";
    cin>>n;
    int b[n];
    cout<<"Enter the elements of Array 2: ";
    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    printIntersection(a,b,m,n); 
    
    return 0;
}
