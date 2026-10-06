#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,t,n,x;
    scanf("%d",&t);
    while (t--)
    {
        
        scanf("%d",&n);
        x=n/2;
        if (x%2!=0)
        {
            printf("NO\n");
        }
        else 
        {
            printf("YES\n");
            for (i = 2; i <= n; i+=2)
            {
                printf("%d ",i);
            }
            for ( j = 1; j < n-2; j+=2)
            {
              printf("%d ",j);
              
            }
            printf("%d ",j+n/2);
            printf("\n");
            
            
        }
        
        
    }
    
    return 0;
}
