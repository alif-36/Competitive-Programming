#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    scanf("%d",&a);
    for (int i = 1; i = a; i++)
    {
        scanf("%d",&b);
        b++;
        c=(b*(b+1)*(b+b+1))/6;
        printf("%d\n",c);
    }
   

    return 0;
}
