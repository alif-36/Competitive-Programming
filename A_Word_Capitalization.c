#include<stdio.h>
#include<string.h>
#include<ctype.h> 
int main(int argc, char const *argv[])
{
    int i;
    char A[1000];
    scanf("%s",&A);
    char c=A[0];
    if (c>92)
    {
        c=c-32;
        
    }
    A[0]=c;
    
    printf("%s",A);
    
    return 0;
}
