#include<iostream>
using namespace std;
void  ans(int n){

     int i=0,j=n-1;
        string s;
        cin>>s;
        while (i<j)
        {
            if (s[i]!=s[j])
            {
                n-=2;
            }else
            {
                cout<<n<<endl;
                return;
            }
            
            
        i++;
        j--;
        }
        cout<<n<<endl;
       
}



int main()
{
    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        ans(n);
    }
    

}