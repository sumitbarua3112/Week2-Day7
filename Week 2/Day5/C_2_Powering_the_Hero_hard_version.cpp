#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
    {
        ll n ;
        cin>>n;
        vector<ll> v(n);
        for(int i=0; i<n; ++i) {
            cin>>v[i]; 
        }
        ll ans=0;
        priority_queue<ll>pq;
        for(int i=0; i<n; ++i) {
          if(v[i]==0)
          {
            if(pq.empty())
            {
                continue;
            }
            ans+=pq.top();
            pq.pop();
          }
          else{
            pq.push(v[i]);
          }
        }
        cout<<ans<<endl;

    }
int main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    ll t=1 ;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
