#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int a,b,t;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d%d",&a,&b);
        printf("\n %d",(abs(a-b)+9)/10);
    }
    
    return 0;
}
