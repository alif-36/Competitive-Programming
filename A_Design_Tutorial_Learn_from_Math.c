#include<stdio.h>

int check (int a){
    int c=0;

 for (int j = 1; j <=a; j++)
        {
            if (a%j==0)
            {
                c++;
            }
            
         }

    return c;     

}



int main(int argc, char const *argv[])
{
    int a,b,n,x,y;
    scanf("%d",&n);
    for (int i = 4; i <= n; i++)
    {
        a=i;
        b=n-i;

     

     if (check(a)>2 && check(b)>2)
     {
        break;
     }
     
    }
    
    printf("%d %d",a,b);
    return 0;
}
