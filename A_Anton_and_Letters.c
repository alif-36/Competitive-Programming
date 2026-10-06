#include<stdio.h>
#include<string.h>

// function to return the number of unique
// characters in s[]
int count(char* s)
{
    int i,c=0;
    int u[128]={0};
    for(i=0; i<strlen(s); i++)
    {
        u[s[i]]=1;
    }

    for (int i = 0; i < 128; i++)
    {
        c=c+u[i];
    }
    
    return c;
}


int main() {

	char a[1001],s[1001]={};
    int f=0;
	
	gets(a);
    for (int j = 0; j < strlen(a); j++)
    {
        if ((a[j]==' ')||(a[j]=='{')||(a[j]==',')||(a[j]=='}'))
        {
            continue;
        }
        else
		{
			s[f]=a[j];
		f++;
		}
		
    }
    

	printf("%d", count(s));

}


