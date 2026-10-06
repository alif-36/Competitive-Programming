#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t,x,s;
    char k[5];
    cin>>t;
    while (t--)
    {
        cin>>k;
         int l=strlen(k);
        for (int i = 1; i < 10; i++)
        {
            if (k[0]==48+i)
            {
                if (l==4)
                {
                    s=10*i;
                }
                else if (l==3)
                {
                    s=10*(i-1)+6;
                }
                else if (l==2)
                {
                    s=10*(i-1)+3;
                }
                else 
                {
                   s=10*(i-1)+1;
                }
                
                
                
            }
            
        }
        
        cout<<s<<endl;
    }
    
}