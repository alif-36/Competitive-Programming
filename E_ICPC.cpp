#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int a[100000];
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int c=0;
        int n;
        cin>>n;
        for(auto i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int s=0;
        for(auto i=n-1; i>=1; i--)
        {
            if(abs(a[i]-a[i-1])==0)
            {
                s++;
            }

            c=c+i;
        }
        cout<<c-s;
    }

    return 0;
}