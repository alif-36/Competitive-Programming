#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,t,a[1002],n,s=0,p=0,k=1;
    scanf("%d",&n);
    for ( i = 0; i <n; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i<n; i++)
    {
       for (int j = n-1; j<=0; j--)
       {
        if (k%2==0)
        {
        if (a[i]<a[j])
        {
           p=p+a[j];
           a[j]=0;
           k++;
        }else
        {
           p=p+a[i];
           a[i]=0;
           k++;
        }
        

        }else
        {
            if (a[i]<a[j])
        {
           s+=a[j];
           a[j]=0;
           k++;
        }else
        {
           s+=a[i];
           a[i]=0;
           k++;
        }
        }
        
        
       
        
       } 
    }

  
    
    
    printf("%d %d",s,p);
    return 0;
}
