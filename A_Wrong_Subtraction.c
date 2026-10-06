#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int n,k,c;
    scanf("%d%d",&n ,&k);
    for (int i = 0; i < k; i++)
    {
       
            
        c=n%10;
       
        
       if (c==0)
       {
          n=n/10;
       }
       else
       {
          n=n-1;
       }
       
       


    }
    printf("%d",n);
    
    return 0;
}
