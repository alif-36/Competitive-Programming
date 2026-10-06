#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[102],i,j=0,b,t,n,c=0;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d",&n);
        
        
            
            for ( i = 0; i <n; i++)
            {
                scanf("%d",&a[i]);
            }
            
           for ( i = 0; i < n-1; i++)
           {
              
              if (a[i]!=a[i+1])
              {  
                  j=i ;
              }
        } 
            
         
        if (j==n-2&&a[n-3]==a[n-2])
        {
            j=n-1;
        }
            
            
            
    printf("\n%d",j+1);
        
        
    }
    
    return 0;
}
