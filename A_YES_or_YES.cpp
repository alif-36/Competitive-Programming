#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
    int t;
    string s2,s1="YES";
    cin>>t;
    while (t--)
    {
       cin>>s2;
       if (strcasecmp(s2.c_str(),s1.c_str())==0)
       {
        cout<<"\nYES";
       }
       else
       {
        cout<<"\nNO";
       }
       
    }
    
}