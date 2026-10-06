#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n, k, l, c, d, p, nl, np,a,b,x;
    scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);
    a=(k*l)/nl;
    b=c*d;
    x=p/np;
    if (a==0||b==0||x==0)
    {
printf("0");
    }
    else if (a<b&&a<x)
        {
            printf("%d",a/n);
        }
        else if (b<a&&b<x)
        {
            printf("%d",b/n);
        }
        else if (x<b&&x<a)
        {
            printf("%d",x/n);
        }
        else if (a==b||a==x)
        {
            printf("%d",a/n);
        }
        else if (b==a||b==x)
        {
            printf("%d",b/n);
        }
        else if (x==b||x==a)
        {
            printf("%d",x/n);
        }
             
    
    
    return 0;
}
