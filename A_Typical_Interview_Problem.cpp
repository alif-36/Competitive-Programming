#include<iostream>
using namespace std;
#include<cstdio>
#include<cstring>

char s[]="FBFFBFFBFBFFBFFBFBFFBFFB";
char a[15];
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n>>a;
		if(strstr(s,a)!=NULL)printf("YES\n");
        else printf("NO\n");
	}return 0;
}