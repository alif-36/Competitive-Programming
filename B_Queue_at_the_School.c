
    #include<stdio.h>
    int main()
    {
    	int n,t;
        scanf("%d %d",&n,&t);
    	char a[n];
    	scanf("%s",a);
    	while(t--)
    	{
    		for(int i=0;i<n-1;i++)
    		{
    			if(a[i]=='B'&&a[i+1]=='G')
    			{
    				a[i]='G';a[i+1]='B';i++;
    			}
    		}
    	}
    	printf("%s\n",a);
    }
