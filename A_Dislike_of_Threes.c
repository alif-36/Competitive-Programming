#include<stdio.h>
int main(int argc, char const *argv[])
{
    int  a=0,c=0,i,n,k;
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&k);
        while (1)
        {
            a++;
            if (a%3==0||(a-3)%10==0)
            {
                continue;
            }else
            {
                c++;
            }
            


        
        if (c==k)
        {
            break;
        }
        
             
        }
        printf("\n%d",a);
    }
    
    return 0;
}
