    #include<stdio.h>
    
    int main(){
        long int a[4];
        int k=0,i=0,j;
    for(i=0;i<4;i++){
    scanf("%ld",&a[i]);
    
    for(j=0;j<i;j++) 
    {
    if(a[j]==a[i])
    { k++; 
    break;
    }
    }
    }
    printf("%d",k);}