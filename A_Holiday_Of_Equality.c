#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[102],temp,i,s=0,n;
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
      scanf("%d",&a[i]);
    }
    for (i = 0; i <n; i++)
    {
       for (int j = 1; j < n; j++)
       {
       
       
       
        if (a[i]<=a[j])
        {
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }
       } 
    }
    s=a[0];
    s=s*n;
    for ( i = 0; i < n; i++)
    {
        s=s-a[i];


    }
    
    
    printf("%d",s);
    return 0;
}
