#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j=0,k=0;
    char c;
    scanf("%d",&i);
    while (i+1)
    {
        scanf("%c",&c);    
       if (c=='A')
        {
            j++;    
            
        }
        else if(c=='D')
          {
            k++;
          }


          i--;      
    }



    if (j>k)
      {
          printf("Anton");
       }
    else if (k>j)
      {
        printf("Danik");
        }
    else if(k==j)
      {
        printf("Friendship");
       }
    
    
    return 0;
}
