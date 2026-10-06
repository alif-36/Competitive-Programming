#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
 int i,n,c=0;
 char S[101],P[101]="abcdefghijklmnopqrstuvwxyz";
 scanf("%d",&n);
 
 
    scanf("%s",S);
   strlwr(S);

   
 
  if (strspn(P,S)==26)
  {
     printf("YES");
  }
  else
  {
    printf("NO");
  }
  
    return 0;
}
