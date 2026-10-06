#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char k[10000],A[10000];
    scanf("%s",&k);
    scanf("%s",&A);
    for (int i = 0; i < strlen(A); i++)
    {
        printf("%d",k[i]^A[i]);
    }
    
    
    return 0;
}
