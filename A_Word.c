#include<stdio.h>
#include<string.h>
#include<ctype.h> 
int main(int argc, char const *argv[])
{
    char w[102];
    int a,b,c=0;
    scanf("%s",&w);
    a=strlen(w);
    for (int i = 0; i < a; i++)
    {
        b=isupper(w[i]);
        if (b==1)
        {
            c++;
        }
        
    }
    if (c>a-c)
    {
        strupr(w);
        
    }
    else if (c<a-c)
    {
        strlwr(w);
    }
    else if(c==a-c)
    {
       strlwr(w);
    }


    printf("%s",&w);
    
    
    
    
    return 0;
}
