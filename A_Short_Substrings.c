#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    int t;
    char a[101],b[101];
    scanf("%d",&t);
    while (t--)
    {

        scanf("%s",&b);
        if (strlen(b)==2)
        {
            printf("%s\n",b);
            continue;
        }
       else{

        printf("%c",b[0]);
        for (int i = 0; i <strlen(b); i++)
        {
            
            if (i%2!=0)
            {
                printf("%c",b[i]);
            }

            
            
        }
        printf("\n");
       }
        
    }
    
    return 0;
}
