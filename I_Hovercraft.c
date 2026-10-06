#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
   float a,b,c;
   while (1)
   {
     
    scanf("%f%f",&a,&b);
    if (a==0&&b==0)
    {
        break;
    }
   else{ 
    c=b+(3*a/4);
    printf("%.4f\n",c);
   }
   }
   

    return 0;
}
