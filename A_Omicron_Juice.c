#include<stdio.h>
int main(int argc, char const *argv[])
{
    int t,a,b,c;
    scanf("%d",&t);
    for (int i = 1; i <= t; i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        
        if ((a+b+c)%3==0)
        {
            printf("Case %d: Peaceful\n",i);
        }
        else
        {
           printf("Case %d: Fight\n",i);
        }
        
        
    }
    
    return 0;
}
