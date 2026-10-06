#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
    std:: string s="codeforces";
    int t;
    cin>>t;
    while (t--)
    {
        
    char c;
    cin>>c;
    
     if (s.find(c) != std::string::npos) {
        cout << "YES" << std::endl;
    } else {
        cout << "NO" << std::endl;
    }
    
    
}
}