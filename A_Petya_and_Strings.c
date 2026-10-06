#include<stdio.h>
#include<string.h>
#include<ctype.h> 
int main(int argc, char const *argv[])
{
    
    char A[100],B[100];
    scanf("%s%s",&A,&B);
    
  
  printf("%d",strcasecmp(A,B));
    return 0;
}
