#include<iostream>
using namespace std;
int main()
{
  int t,a,b,c,n;
  cin>>t;
  while (t--)
  {
    cin>>a>>b>>c>>n;
    if ((a+b+c+n)%3||(a+b+c+n)/3<max(a,max(b,c)))
    {
        cout<<"NO"<<endl;
    }else
    {
        cout<<"YES"<<endl;
    }
    
    
  }
     
}