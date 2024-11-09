#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
    {
        ll n ,m;
        cin>>n>>m;
        map<ll,set<ll>>mp;
        for(int i=1; i<=n; ++i) {
            ll a;
            cin>>a;
            mp[a].insert(i);
        }
        for(int i=1; i<=m; ++i) {
          ll k,j;
          cin>>k>>j;
          if(mp.find(k)==mp.end() || mp.find(j)==mp.end()){
            cout<<"NO"<<endl;
          }
          else{
            ll a,b;
            a=*mp[k].begin();
            b=*mp[j].rbegin();
            if(a<b)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;

          }
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
