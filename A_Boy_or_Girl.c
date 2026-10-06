#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    int i,j,k,m;
    char S[100];
    scanf("%s",&S);
    j=strlen(S);
    for ( i =0; i < strlen(S); i++)
    {
       
       for(m=i+1;m<strlen(S);m++)
       {
       if (S[i]==S[m])
       {
        j--;
        break;

       }
       /*else
       {
        k++;
       }*/
       
       }
    }


    if (j%2==0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
         printf("IGNORE HIM!");
    }
    
    
    
    return 0;
}
