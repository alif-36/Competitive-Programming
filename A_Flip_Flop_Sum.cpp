#include<iostream>
using namespace std;
int main()
{
   int t,n,c,x,b;
   cin>>t;
   while (t--)
   {
    c=0;x=0;b=0;
     cin>>n;
     int a[n];
     
      cin>>a[0];
      c+=a[0];
      if (a[0]<0)
      {
         b++;
      }
      
     
     for (int i = 1; i < n; i++)
     {
       cin>>a[i];
        if (a[i]==a[i-1]&&a[i]<0)
        {
          x++;
          
        }
        if (a[i]<0)
        {
         b++;
        }
        
        c+=a[i];
     }
     if (x>0)
     {
      cout<<c+4<<endl;
     }else if (b==0)
     {
      cout<<c-4<<endl;
     }else if (x==0)
     {
      cout<<c<<endl;
     }
     
     
     
         
     
   }
    
}