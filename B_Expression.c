#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int a,b,c,i,j,y,n,k,m;
    scanf("%d%d%d",&a,&b,&c);
    if (a>0&&b>0&&c>0&&a<=10&&b<=10&&c<=10)
    {
     i=(a+b)*c;
    j=a*b*c;
    k=a+b*c;
    m=a*(b+c);
    n=a+b+c;
    y=(a*b)+c;
    if (i>j&& i>k&&i>m&&i>n&&i>y)
    {
        printf("\n%d",i);
    }
    else if ((j>i)&&(j>k)&&(j>m)&&j>n&&j>y)
    {
        printf("\n%d",j);
    }
    else if ((k>i)&&(k>j)&&(k>m)&&k>n&&k>y)
    {
        printf("\n%d",k);
    }
    else if((m>i)&&(m>j)&&(m>k)&&m>n&&m>y)
    {
        printf("\n%d",m);
    }
     else if ((n>i)&&(n>j)&&(n>m)&&n>k&&n>y)
    {
        printf("\n%d",n);
    }
     else if ((y>i)&&(y>j)&&(y>m)&&y>n&&y>k)
    {
        printf("\n%d",y);
    }
        }
    return 0;
}
