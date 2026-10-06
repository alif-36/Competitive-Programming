#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,p,q,s,k=0,a[100];
    scanf("%d",&p);
    scanf("%d",&q);
    for ( i = 0; i < q; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&s);
    for (; i <q+s; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( j = 1; j <= p; j++)
    {
        for ( i = 0; i < q+s; i++)
        {
            if (a[i]==j)
            {
                k++;
                break;
            }
            
        }
        
    }
    
    if (k==p)
    {
        printf("I become the guy.");
    }
    else
    printf("Oh, my keyboard!");

    return 0;
}
