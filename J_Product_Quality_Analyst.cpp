#include <iostream>

using namespace std;

int main()
{
    int t,m=0;
    cin>>t;
    while(t--)
    {
        int n;
        m++;
        long long int k;
        cin>>n>>k;
        long long int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        long long int s=a[0]*k;
        for(int i=1;i<n;i++)
        {
            s=s+a[i];
            if(k>=a[i])
            {
                s=s;
            }
            else
            {
                s=s+1;
            }
        }

        cout<<"Case "<<m<<":"<<s<<endl;

    }
    return 0;
}