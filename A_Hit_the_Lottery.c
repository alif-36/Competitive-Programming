#include<stdio.h>
int main(int argc, char const *argv[])
{
    long int n,i=0,s=0;
    scanf("%ld",&n);
    while (n!=0)
    {
        i=n/100;
        n=n%100;
        s+=i;
        if (n==0)
        {
            break;
        }
        
        i=n/20;n=n%20;s+=i;
        if (n==0)
        {
            break;
        }
        i=n/10;n=n%10;s+=i;
        if (n==0)
        {
            break;
        }
        i=n/5;n=n%5;s+=i;
                if (n==0)
        {
            break;
        }
        i=n/1;n=n%1;s+=i;
                if (n==0)
        {
            break;
        }

    }
    printf("%ld",s);
    return 0;
}
