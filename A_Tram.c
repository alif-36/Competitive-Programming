#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,n,m=0,s=0;

    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d",&a,&b);
        s=s+b-a;
        if (s>m)
        {
            m=s;
        }
        
    }
    printf("%d",m);
    
    return 0;
}
