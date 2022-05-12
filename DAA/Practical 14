#include<bits/stdc++.h> 
using namespace std;
vector<int> twoSum(int A[], int n,int sum)
{ 
    vector<int> an;
    sort(A, A + n);
    int l = 0;
    int r = n - 1;
    while (l < r) {
        if (A[l] + A[r] == sum)
        {
            an.push_back(l);
            an.push_back(r);
            return an;
        }
        else if (A[l] + A[r] < sum)
            l++;
        else 
            r--;
    }
    return an;
}
int main()
{
    int n,k;
    cout<<"Enter the number of elements: ";
    cin>>n; 
    int a[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
        cin>>a[i];

    vector<int> an; 
    cout<<"Enter the key: ";
    cin>>k;
    an=twoSum(a,n,k); 
    if(an.empty())
    {
        cout<<"No ssequence Found";
    } 
    else
    {
        for(int i=0;i<an.size();i++)
        {
            cout<<a[an[i]]<<" ";
        }
    } 
    return 0;
}
