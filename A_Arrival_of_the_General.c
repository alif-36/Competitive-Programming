# include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,n,c=0,temp,A[100];
    scanf("%d",&n);
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&A[i]);
    }

    for ( i = 0; i < n; i++)
    {
         for ( j = i+1; j <n; j++)
        {
            if (A[i]<A[j])
            {
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
                c++;
                if (/* condition */)
                {
                    /* code */
                }
                
            }
        }  
        
    }
    
    printf("%d",c);
    return 0;
}
