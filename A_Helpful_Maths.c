#include<stdio.h>
#include<string.h>
#include<ctype.h> 
int main(int argc, char const *argv[])
{
    char A[100];
    int t;
    scanf("%s",&A);

    for (int i = 2; i < strlen(A);)
    {
        if (A[i-2]>A[i])
        {
              t=A[i-2];
              A[i-2]=A[i];
              A[i]=t;
              i=2;
             
             continue;
        }
       
        i+=2; 
         
    }
    printf("%s",A);
    
    return 0;
}
