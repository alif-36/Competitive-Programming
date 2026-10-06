#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    for (;; )
    {
        a=a*3;
        b=b*2;
        c++;
        if (a>b)
        {
            printf("%d",c);
            break;
        }
        else
        {
            continue;
        }
        
        
    }
    
    return 0;
}
