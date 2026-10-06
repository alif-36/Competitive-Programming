#include<stdio.h>
int main(int argc, char const *argv[])
{
    long int i, t;
    long long int a,b,c=0;
    scanf("%ld",&t);
    for ( i = 0; i < t; i++)
    {
      c=0;
      scanf("%lld",&a);
      scanf("%lld",&b);
      if (a%b==0)
      {
        printf("0\n");
      }
      else
      {
        while (1)
        {
            a++;
            c++;
            if (a%b==0)
               {
                  printf("%lld\n",c);
                  break;
                }
                
        }
        
      }
      


    }
    
    return 0;
}
