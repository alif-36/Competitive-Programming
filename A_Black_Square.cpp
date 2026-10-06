#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
    int a[5],c=0,b;
    string s;
    for (int i = 1; i < 5; i++)
    {
      cin>>a[i];
    }
    cin>>s;
   
    for (int i = 0; i <s.size(); i++)
    {
       b=(int)s[i]-48;
       c+=a[b];
    }
    cout<<c;
    

}