#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,c,i=0;
    scanf("%d",&n);
    while (n!=0)
    {
        
        c=n%10;
        n=n/10;
        
        if (c==7||c==4)
        {
            i++;
        }
        

    }
    if (i==7||i==4)
    {
        printf("YES");

    }
    else
    {
        printf("NO");
    }
    
    
    
    return 0;
}
