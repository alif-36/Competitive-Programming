#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b;
    c=7-max(a,b);
    d=__gcd(6,c);
    cout<<c/d<<"/"<<6/d;
}