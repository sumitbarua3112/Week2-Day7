#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
    {
        ll n,m,q;
        cin>>n>>m>>q;
        vector<ll> a(m);
        for(int i=0; i<m; ++i) {
            cin>>a[i]; 
        }
        sort(a.begin(),a.end());
        for(int i=0; i<q; ++i) {
            ll x;
            cin>>x; 
        if(x>a[0] && x>a[m-1])
        {
             ll i=abs(n-a[0]);
             ll j=abs(n-a[m-1]);
            cout<<min(i,j)<<endl;
        }
         else if(x<a[0] && x<a[m-1])
        {
             ll i=abs(1-a[0]);
             ll j=abs(1-a[m-1]);
            cout<<min(i,j)<<endl;
        }
        else{
            ll lo=lower_bound(a.begin(),a.end(),x)-a.begin();
        ll k1=abs(x-a[lo-1])-1;
        ll k2=abs(x-a[lo])-1;
        ll mn1=min(k1,k2);
        ll mx=max(k1,k2);
        mx-=mn1;
        cout<<mn1+1+mx/2<<endl;
         }
        }
    }
int main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    ll t = 1;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
