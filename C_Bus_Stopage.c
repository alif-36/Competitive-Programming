#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,n,T,m=0,s=0;

    scanf("%d",&T);
    for (int k = 0; k < T; k++)
    {
       scanf("%d",&n);
       
       for (int i = 0; i < n-1; i++)
      {
        scanf("%d%d",&a,&b);
        s=s+a-b;
        if (s>m)
        {
            m=s;
        }
       
        
        
      } 
 
      
      printf("Case %d: %d\n",k+1,m);
      m=0;s=0;
    }
    
    
    
    
    return 0;
}