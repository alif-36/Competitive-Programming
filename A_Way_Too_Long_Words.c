#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main()
{
    int a,i,b;
    char S[100];
    
    scanf("%d",&a);
    for ( i = 0; i < a; i++)
    {
        scanf("%s",S);
        b=strlen(S);
        if (b<=10)
        {
            printf("%s\n",S);
        }
        else{
            printf("%c%d%c\n",S[0],b-2,S[b-1]);
        }
    }
    
   return 0;
}
