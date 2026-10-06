#include<iostream>
using namespace std;
int main()
{
 int t,z,b,c=0,d=0,m,n,x,y;
 while (t--)
 {
    cin>>n;
    int a[n+1];
    for (int i = 1; i <=n; i++)
    {
        cin>>a[i];
    }
    cin>>z;
    cin>>b;
    while (b>0)
    {
        cin>>m>>n;
      if (a[m]>a[n]&& a[n]!=0)
    {
        c=a[m];
        a[m]=a[m]+a[n];
        a[n]=0;
        c++;

    }else if (a[n]>a[m]&& a[n]!=0)
    {
        c=a[n];
        a[n]=a[m]+a[n];
        a[m]=0;
        d++;
    }else 
    {
        continue;
    }
    
  b--;
    }
    
    
    cin>>z>>x;
    if (x==m)
    {
        if (a[x]==c)
        {
            cout<<"1"<<endl;
        }else if (a[x]>c)
        {
            cout<<"2"<<endl;
        }else if (a[x]<c)
        {
            cout<<"0"<<endl;
        }
        
        
        
    }else if (x==n)
    {
        if (a[x]==d)
        {
            cout<<"1"<<endl;
        }else if (a[x]>d)
        {
            cout<<"2"<<endl;
        }else if (a[x]<d)
        {
            cout<<"0"<<endl;
        }
    }else
    {
        cout<<"1"<<endl;
    }
  cin>>z>>y;  
    
    
    
    
 }
    
}