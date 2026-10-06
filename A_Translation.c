#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
  int i,j,k;
  char A[102],B[102];
  scanf("%s",A);
  scanf("%s",B);
  strrev(A);
  strcmp(A,B);
  if (strcmp(A,B)==0)
  {
    printf("YES");
  }
  else
  {
    printf("NO");
  }
  //bullshit
}