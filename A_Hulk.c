#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i;
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        
        if (i%2==0)
        {
            printf(" I love");
        }
        else{
           printf(" I hate");
            }
 

        if (i<n)
        {
            printf(" that");    
        }
        else if (i==n)
        {
            printf(" it");
        }
        
        
      
       
        
        
        
        
    }
     
    
    return 0;
}
