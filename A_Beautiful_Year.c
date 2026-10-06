#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,i,j,k,l;
    scanf("%d",&a);
   while (a++)
   {
    i=a/1000;
    j=a/100%10;
    k=a/10%10;
    l=a%10;
    if (i!=j&&j!=k&&k!=l&&l!=i&&l!=j&&k!=i)
    {
        break;
    }
    
  }
   printf("%d",a);
    return 0;
}
