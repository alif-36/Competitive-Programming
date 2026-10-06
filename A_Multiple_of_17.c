#include<stdio.h>
int main(int argc, char const *argv[])
{
     int n;
     
    
   for (int i = 0; i < 10; i++)
  {
    scanf("%d",&n);
if (n==0)
    {
        break;
    }
  else if (n%17==0)
    {
        printf("1\n");
    }
 else
    {
        printf("0\n");
    }
   
    
   }
   
    return 0;
}
