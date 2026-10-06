#include<stdio.h>
#include<string.h>

int main()
{
    int i,t,n,u,v,c=0,m;
    char s[100],r[100],a[100];
    scanf("%d",&t);



    for ( i = 1; i <= t; i++) 
    {
        c=0;
        scanf("%d",&n);
        scanf("%s",&s);

        if (n==1) {
            printf("Case %d: 1/1\n",i);
            continue;
        }
     else{
        for (m = 0; m < n-1; m++)
        {

            scanf("%d%d",&u,&v);
            if (m>=u&&m<=v) 
            {
                
                a[m]=s[m];
            }


            r[m]=a[m];

            if (strcmp(strrev(a),r)==0)
            {
                c++;
            }
        }
        


        printf("Case %d: %d/%d\n",i,c-1,n);
    }
    

}
