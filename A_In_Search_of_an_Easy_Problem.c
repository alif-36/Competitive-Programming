#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n,s=0;
    scanf("%d",&n);
    while (n>0)
    {
        scanf("%d",&i);
        s=s+i;
        n--;
    }
    if (s>0)
        {
          printf("HARD");
        }
    else if (s==0)
       {
        printf("EASY");
       }
    
    return 0;
}
