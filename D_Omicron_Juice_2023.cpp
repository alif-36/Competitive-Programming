#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[3],k,p[3];
    int t;
    cin>>t;
    int m=0;
    while(t--)
    {
        m++;
        cin>>a[0]>>a[1]>>a[2]>>k;
        int s=a[0]+a[1]+a[2];
        if(s%3==0)
        {

            p[0]=a[0]%k;
            p[1]=a[1]%k;
            p[2]=a[2]%k;
            if(p[0]==p[1]&&p[1]==p[2]){
                cout<<"Case "<<m<<": Peaceful"<<endl;
            }
            else{
                cout<<"Case "<<m<<": Fight"<<endl;
            }
        }
        else{
            cout<<"Case "<<m<<": Fight"<<endl;
        }
    }

    return 0;
}