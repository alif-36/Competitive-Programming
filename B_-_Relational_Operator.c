#include<stdio.h>
 int main()
{
int i,j,k;
scanf("%d",&i);
for (int x = 0; x < i; x++)
{
    scanf("%d%d",&j,&k);
    if (j<k)
    {
        printf("<\n");
        continue;
    }
    else if (j>k)
    {
        printf(">\n");
        continue;
    }
    else
    {
        printf("=\n");
        continue;
    }
    
    
}


return 0;


}