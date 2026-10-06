#include<iostream>
using namespace std;

const int N=500005;
int T,n,a[N],b[N];
bool p,q;

int gcd(int a,int b){
    return b==0?a:gcd(b,a%b);
}

int main(){
    cin>>T;
    for(int i=1;i<=T;i++){
        cin>>n;
        for(int j=0;j<n;j++) cin>>a[j];
        for(int j=0;j<n;j++) cin>>b[j];
        int d=a[0];
        for(int j=1;j<n;j++) d=gcd(d,a[j]);
        p=q=1;
        for(int j=0;j<n;j++){
            if(b[j]%d!=0){
                p=0;
                break;
            }
        }
        int dd=b[0]/d;
        for(int j=1;j<n;j++) dd=gcd(dd,b[j]/d);
        for(int j=0;j<n;j++){
            int x=a[j]/d,y=b[j]/d;
            while(x%dd!=0){
                int dd1=gcd(x,dd);
                if(dd%dd1!=0){
                    q=0;
                    break;
                }
                while(dd%dd1==0) dd/=dd1;
                while(x%dd1==0) x/=dd1;
            }
            if(x!=y){
                q=0;
                break;
            }
        }
        printf("Case %d:",i);
        cout<<(p?" Yes":" No")<<" "<<(q?"Yes":"No")<<endl;
    }
    return 0;
}
