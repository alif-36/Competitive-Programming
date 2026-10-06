#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c,i,j;
    scanf("%d",&a);
    for ( i = 0; i < a; i++)
    {
        scanf("%d%d",&b,&c);
        if (c-b>1)
        {
            j++;
        }
        
    }
    printf("%d",j);
    
    return 0;
}
