#include<iostream>
using namespace std;
int main()
{
 int s=0,p=0,k=1,n,j;
 cin>>n;
 int a[n];
 for (int i = 0; i < n; i++)
 {
    cin>>a[i];
 }
    for (int i = 0; i < n; i++)
    {
       j=n-1-i;
            if (k%2==0)
            {
                k++;
                if (a[i]>a[j])
                {
                    p+=a[i];
                    a[i]=0;
                
                }else
                {
                    p+=a[j];
                    a[j]=0;
                   
                }
                
                
            }else
            {
                k++;
                if (a[i]>a[j])
                {
                    s+=a[i];
                    a[i]=0;
                   
                }else
                {
                    s+=a[j];
                    a[j]=0;
                    
                }
            }
            
            
        
        
    }
    cout<<s<<" "<<p;
}