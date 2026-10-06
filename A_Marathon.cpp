#include<iostream>
using namespace std;
int main()
{
 int t,n,a[4],c=0;
 cin>>n;
 while (n--)
 {
    c=0;
    cin>>t;
    for (int i = 0; i < 3; i++)
    {
        
        cin>>a[i];
        if (a[i]>t)
        {
          c++;
        }
        
    }
    cout<<c<<endl;
 }
    
}