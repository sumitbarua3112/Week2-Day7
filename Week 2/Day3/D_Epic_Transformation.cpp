#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
    {
        ll n;
        cin>>n;
        map<ll,ll>mp;
        vector<ll>v(n);
        ll mx=0;
        for(int i=0; i<n; ++i) {
            cin>>v[i]; 
            mp[v[i]]++;
            mx=max(mp[v[i]],mx);
        }
       ll m=n-mx;
       if(m>=mx)
       {
        if(n%2)cout<<1<<endl;
        else cout<<0<<endl;
       }
       else{
        cout<<mx-m<<endl;
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
