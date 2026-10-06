#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    int n,x=0;
    char a[150];
    scanf("%d",&n);
    while (n--)
    {
       scanf("%s",&a);
       if (a[1]=='+')
       {
        x++;
       }
       else if (a[1]=='-')
       {
        x--;
       }
       
        
    }
    
    printf("\n%d",x);
    return 0;
}
