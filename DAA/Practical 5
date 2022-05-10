#include<bits/stdc++.h>
using namespace std;

void FindSequence(vector<int> v,int n){
    int i=n-1;
    while(i>=0){
        int j=0,k=n-1;
        while(j<=k){
            if(v[j]+v[k]==v[i]){
                cout<<j<<" "<<k<<" "<<i<<endl;
                return ;
            }
            else if(v[j]+v[k]>v[i]){
                k--;
            }
            else{
                j++;
            }
        }
        i--;
    }

    cout<<"No Sequence Found"<<endl;
}
int main()
{
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;

    vector<int> v(n);
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    FindSequence(v,n);
}
