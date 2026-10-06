#include<iostream>
#include <cmath>
using namespace std;
int main()
{
    int t,a,b,s,i;
    cin>>t;
    while (t--)
    {
        i=0;
        cin>>a>>b;
        s=2*a*b;
        i=sqrt(s);
        if(a>b)swap(a,b);
	    if(2*a>=b)
        {
            cout<<4*a*a<<endl;
            }
	    else 
        {
            cout<<b*b<<endl;
        }
        

    }
    
}