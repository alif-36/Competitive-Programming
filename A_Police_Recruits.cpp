#include<iostream>
using namespace std;
int main()
{
 int n,a,s=0,c=0;
 cin>>n;
 while (n--)
 {
    cin>>a;
    if (s+a<0)
    {
        c++;
    }else
    {
        s+=a;
    }
        
 }
 cout<<c;
    
}