    #include<stdio.h>
    int main(){
    	int t;
    	scanf("%d",&t);
    	while(t--){
    		int n;
    		scanf("%d",&n);
    		int a[n];
    		for(int i=0;i<n;i++)
            {
    			scanf("%d",&a[i]);
            }
    		if(n==1)
            {
                printf("YES\n");continue;
            }
    		for(int i=0;i<n;i++)
            {
    			for(int j=i+1;j<n;j++)
                {
    				if(a[j]<a[i])
                    {
                        int b=a[j];
                        a[j]=a[i];
                        a[i]=b;
                    }
                }
            }
    		int c=1;
    		for(int i=0;i<n-1;i++)
            {
    			if(a[i+1]-a[i]>1)
                {
                    c=0;
                    break;
                }
            }
    		if(c==1)
            {
                printf("YES\n");
            }
    		else{printf("NO\n");}
    	}
    }