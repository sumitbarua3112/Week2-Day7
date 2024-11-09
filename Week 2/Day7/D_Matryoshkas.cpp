#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
    {
        ll n ;
        cin>>n;
        vector<ll> a(n);
        map<ll,ll>mp;
        for(int i=0; i<n; ++i) {
            cin>>a[i]; 
            mp[a[i]]++;
        }
        ll ans=0;
        sort(a.begin(),a.end());
        for(int i=0; i<n; ++i) {
          if(mp[a[i]])
          {
            ans++;
            ll k=a[i];
            for(int j=0; j<n; ++j) {
              if(mp[k])
              {
                mp[k]--;
                k++;
              }
              else{
                break;
              }
            }

          }
        }
        cout<<ans<<endl;

        
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