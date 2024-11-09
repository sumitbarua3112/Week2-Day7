#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
    {
        ll n;
        cin>>n;
      multiset<ll>mp;
      for(int i=0; i<n; ++i) {
        ll a;
        cin>>a;
        mp.insert(a);
      }
      ll ans=0,b=1;
      while(!mp.empty())
      {
        auto it=mp.lower_bound(b);
        if(it!=mp.end())
        {
            ans++;
            mp.erase(it);
        }
        else{
            break;
        }
        b++;
      }
      cout<<ans<<endl;
    }
int main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);

        solve();

}
