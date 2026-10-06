#include<stdio.h>
int main(int argc, char const *argv[])
{
    int k,j=0,n,c=0;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&k);
        if (k!=j)
        {
            c++;
            j=k;
        }
    }
    printf("%d",c);
    
    return 0;
}
