#include<iostream>
using namespace std;
int main()
{
    int t,n,x,y,a;
    
    cin>>t;
    while (t--)
    {
        x=0;y=0;a=0;
        cin>>n;
        char s[n];
        
        for (int i = 0; i < n; i++)
        {

            cin>>s[i];
            if (s[i]=='U')
            {
                y=y+1;
            }else if (s[i]=='R')
            {
                x=x+1;
            }else if (s[i]=='L')
            {
               x=x-1;
            }
            else if (s[i=='D'])
            {
                y=y-1;
            }
            
            
        if (x==1 && y==1)
            {
                a++;
            }
            



            }
            if (a>=1)
            {
                cout<<"YES"<<endl;
            }else
            {
                cout<<"NO"<<endl;
            }
            
            
        }
    

}