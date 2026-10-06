//Alif Mahmud
//Id:210936
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,s=0,c=0;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    while (s1.length()>s2.length())
    {
        s1='0'+s1;
    }
    while (s2.length()>s1.length())
    {
        s2='0'+s2;
    }
    
    
    string s3;
    int temp=0;
    for (int i =s1.length()-1; i>=0; i--){
                     
            s2[i]=s2[i]+temp;
            if(s1[i]>=s2[i]){
               s3[i]=s1[i]-s2[i];
               temp=0;
               }
            else{
                s3[i]=(10+s1[i])-s2[i];
                temp=1;
            }
        }
    

   
   
  cout<<s3;    
}
