#include<stdio.h>
int main(int argc, char const *argv[])
{
    int t,a[100],s,n,x;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d %d",&n,&s);
        while (n--)
        {
           scanf("%d",&x); 
           a[x]=1;
        }
        for (int i = 0; i < 100; i++)
        {
            if (a[i]!=1)
            {
                s=s-i;
                if (s==0)
                {
                   printf("YES\n");
                    break;
                }
                else{
                    printf("NO\n");
                    break;
                }
                
            }
            
        }
        
        
    }
    
    return 0;
}
