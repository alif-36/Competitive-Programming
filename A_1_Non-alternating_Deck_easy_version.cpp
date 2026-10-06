#include<iostream>
using namespace std;
int main()
{
    int t,n,a,b,c=1,d=0;
    cin>>t;
    while (t--)
    {
        a=0;b=0;
        cin>>n;
        a=1;
        n=n-1;
        int i=2;
        while (n>0)
        {
            
          if (n<=i && i%4!=0)
            {
                b+=n;
                break;
            }else if (n<=i && i%4==0)
            {
                a+=n;
                break;
            }else if (i%4!=0)
            {
                b+=i;
                n-=i;
                if (i+1<n)
                {
                    
                b+=i+1;
                i=i+2;
                n=n-i+1;
                }else
                {
                    continue;
                }
                
                
                
            } else if (i%4==0)
            {
               
                a+=i;
                n-=i;
                if (i+1<n)
                {
                    
                a+=i+1;
               i+=2;
               n=n-i+1;
                }else
                {
                    continue;
                }
                
                
               
                
            }    
        }
        cout<<a<<" "<<b<<endl;
        d=0;
    }
    
}