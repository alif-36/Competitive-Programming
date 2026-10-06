#include<stdio.h>
#include<strings.h>
#include<ctype.h> 
int main(int argc, char const *argv[])
{
    
   int i,n,b=0,c=0,d=0;
    char A;
   scanf("%d",&n);
   for ( i = 0; i < n; i++)
   {
    scanf("%c",&A);
    if (A=='R')
    {
        b++;
    }
    else if (A=='B')
    {
        c++;
    }
    else if (A=='G')
    {
        d++;
    }
    
    
    
   }
   
    
    
 if (b<c&&b<d)
 {
    printf("%d",b);
 }
 else if (c<b&&c<d)
 {
    printf("%d",c);
 }
 else if(d<b&&d<c){
    printf("%d",d);
 }
 else{
    printf("0");
 }
    return 0;
}