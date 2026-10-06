#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,k,a,c=0;
    scanf("%d%d",&n,&k);
    while (n--)
    {
        scanf("%d",&a);
        if (a<=5-k)
        {
            c++;
        }
        

    }
    printf("%d",c/3);
    
    return 0;
}
