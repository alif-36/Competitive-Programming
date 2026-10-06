#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,n,m,s,a[1000];
    scanf("%d%d"&n,&j);
   for ( i = 0; i < n; i++)
   {
    scanf("%d",a[i]);
    
    }
    for ( i = 0; i < n; i++)
    {
       m=a[j];
    if (a[i]>=m)
    {
       s++;
    }
    }
    
   printf("%d",s);
   
    return 0;
}
