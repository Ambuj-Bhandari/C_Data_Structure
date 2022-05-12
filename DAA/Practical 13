#include<iostream>
using namespace std;
int main()
{

     int array[256] = {0}; // initialize all elements to 0

    int n; 
    cout<<"Enter the number of elements:";
    cin>>n;

    char str[n]; 
    cout<<"Enter the characters: "; 
    for(int i=0;i<n;i++)
        cin>>str[i];

    int i, max, index;

    for(i = 0; i<n; i++)
    {
        array[str[i]-'a']++;
    }

    //Find the letter that was used the most
    max = array[0];
    index = 0;
    for(i = 0; i<n; i++)
    {
         if( array[str[i]-'a'] > max)
        {
             max = array[str[i]-'a'];
            index = i;
        }
    }
    cout<<str[index]<<"--- "<<array[str[index]-'a'];

}
  	
