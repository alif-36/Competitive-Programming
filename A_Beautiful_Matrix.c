#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[6][6],i,j,s;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <=5; j++)
        {
            scanf("%d",&a[i][j]);
            if (a[i][j]==1)
            {
               if (i==j&&i!=5)
               {
                s=0;
               }
              
               else if (i==j&&i==5)
               {
                s=4;
               }
                else
               {
               s=i+j-4;
                
               }
               
                
            }
            
           
            
        }
        
    }
     
    
    printf("%d",s);
    return 0;
}
