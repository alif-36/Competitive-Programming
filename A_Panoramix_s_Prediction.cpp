#include<iostream>
#include <cmath>
using namespace std;
bool is_prime(int num) {
    if (num < 2) {
        return false;
    }

    int upper_limit = sqrt(num);

    for (int i = 2; i <= upper_limit; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main()
{
    int a,b,i,c;
    cin>>a>>b;
    if (a>=b)
    {
       cout<<"NO"<<endl;
    }else{
        
        for ( i = a+1; ; i++)
        {
            if (is_prime(i))
            {
                c++;
                break;
            }
            
        }
        if (i==b && c)
        {
           cout<<"YES"<<endl;
        }else
        {
            cout<<"NO"<<endl;
        }
        
        
        
    }
    
}