#include<stdio.h>
int main(int argc, char const *argv[])
{
    int t,a,b,c,k;
    scanf("%d",&t);
    for (int i = 1; i <= t; i++)
    {
        scanf("%d%d%d%d",&a,&b,&c,&k);

        if (k<=a&&k<=b&&k<=c&&k>0)
        {
           if (a==b&&b==c&&c==a)
           {
            printf("Case %d: Peaceful\n",i);
           }
  
            else if(a%k!=0||b%k!=0||c%k!=0)
                {
                printf("Case %d: Fight\n",i); 
                }
             else if (a%k==0&&b%k==0&&c%k==0)
               {
                printf("Case %d: Peaceful\n",i);
               }
        }else
               {
                 printf("Case %d: Fight\n",i); 
               }
               

        
    
    }
    
    return 0;
}
