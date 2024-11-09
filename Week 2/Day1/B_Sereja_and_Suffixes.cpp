#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
    {
        ll n,m;
        cin>>n>>m;
        vector<ll> v(n),v1(n+1);
        map<ll,ll>mp;
        for(int i=0; i<n; ++i) {
            cin>>v[i];
        }
        reverse(v.begin(),v.end());
         for(int i=0; i<n; ++i) {
          mp[v[i]]++;
          v1[n-i]=mp.size();
        }
        while(m--)
        {
            ll a;
            cin>>a;
            cout<<v1[a]<<endl;
        }
        
    }
int main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
   
        solve();
}
