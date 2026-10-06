
#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define pi pair<int, int>
#define pl pair<ll, ll>
#define vpi vector<pi >
#define vpl vector<pl >
#define endl '\n'
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x & (1LL << k)) > 0 ? 1 : 0)
#define TestCases int tt,qq; cin>>tt ;for(qq=1;qq<=tt;qq++)
#define fios ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(),a.end()
#define rep(i, a, b) for(int i=a; i<b; i++)
#define pre(i, a, b) for(int i=a; i>=b; i--)


int main()
{
    int t,n,q,a;
    	cin>>t;
	while(t--)
	{
		cin>>n>>a>>q;
		char ch; 
		int mx = a, cnt = a;
		for(int i = 1; i <= q; i ++)
		{
			cin>>ch;
			if(ch == '+') a++,cnt++;
			else a--;
			mx = max(mx,a);
		}
		if(mx == n) cout<<"YES"<<endl;
		else if(cnt >= n) cout<<"MAYBE"<<endl;
		else cout<<"NO"<<endl; 
	}
    return 0;
}