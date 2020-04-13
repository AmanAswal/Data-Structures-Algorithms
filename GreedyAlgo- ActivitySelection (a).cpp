#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
    int s[] =  {1,1,0,3,4,4,5,2}; 
    int f[] =  {2,3,4,5,5,6,8,9};    // finish array is sorted.
    int n;
    n= sizeof(s)/sizeof(s[0]);
 
    int i,j;
    
    cout<<"Following activities are chosen: ";
    i=f[0];
    cout<<i<<" ";

    for(j=1;j<n;j++)
    {
        if (s[j] >=f[i])
        {
            cout<<f[j]<<" ";
            i=j;
        }
    }
    return 0;
}