#include<stdio.h>
#include<string.h>
int main()
{
    char A[100],B[100],C[200];
    scanf("%s%s%s",&A,&B,&C);
    
    if ((strcmp(C,strcat(A,B))==0)||(strcmp(C,A)==1&&strcmp(C,B)==1)||(strcmp(C,strcat(B,A))==0))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    return 0;
}
