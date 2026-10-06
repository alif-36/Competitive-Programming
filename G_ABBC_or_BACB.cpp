#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int m=1000000000,count=0,coins=0,n=s.size();
        for (int i = 0; i < n; i++)
        {
            if (s[i]=='B')
            {
                m=min(m,count);count=0;
            }
            else
            {
                coins++;
                count++;
            }
            
            
        }
        m=min(count,m);
        
        cout << coins-m << endl;
    }

    return 0;
}
