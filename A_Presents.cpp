#include<iostream>
using namespace std;
int main()
{
    int n,i,t;
    cin>>n;
    int a[100];
    for ( i = 1; i <=n; i++)
    {
        cin>>t;
        a[t]=i;
    }
     for ( i =1; i <=n; i++)
    {
        cout<<" "<<a[i];
    }



}