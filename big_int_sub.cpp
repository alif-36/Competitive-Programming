//         Alif Mahmud
//        Id:210936
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,s=0,c=0;
    string s1,s2;
    
    //cout<<"enter String";
    cin>>s1;
    cin>>s2;
    while (s1.length() > s2.length())
    {
        s2='0'+s2;
    }
    while(s1.length() < s2.length())
    {
        s1='0'+s1;
    }
    string s3="";
    
    for (int i = s1.length()-1; i >= 0; i--)
    {
        s=0;
        s=s1[i]-48+s2[i]-48 +s;
        s3=char((s%10)+'0')+s3;
        s=s/10;
        
    
    }
    if(s==1)
    s3='1'+s3;
    cout<<s3;
   
    
}