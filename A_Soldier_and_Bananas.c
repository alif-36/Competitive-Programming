#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
   long int n,k,w;
   long long int s=0;
    scanf("%ld%ld%ld",&k,&n,&w);
    s=(k*w*(w+1))/2;
   s=s-n;
   if (s<=0)
   {
    printf("0");
   }
   else
    printf("%lld",s);

    return 0;
}
