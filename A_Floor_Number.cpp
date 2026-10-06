#include<iostream>
using namespace std;
int main()
{
    int t;
	cin>>t;
	while(t--){
		int n,x,ans=0;
	    cin>>n>>x;
		if(n!=1){
		n=n-2;
		ans=n/x;
		if(n%x!=0)ans+=1;
		}	
		cout<<ans+1<<endl;
		
	}
}