#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i,h,a,j=0;
    scanf("%d%d",&n,&h); 
    
    for ( i = 0; i < n; i++)
    {
      scanf("%d",&a);
        if (a<=h)
        {
           j++;
        }
      else if(a>h) { 
        j=j+2;
       }
      }
    printf("%d",j);
    
    return 0;
}
