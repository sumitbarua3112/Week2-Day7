#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
    {
        ll n;
        cin>>n;
        vector<ll> v(n);
        for(int i=0; i<n; ++i) {
            cin>>v[i]; 
        }
        for(int i=0; i<n; ++i) {
          ll a;
          cin>>a;
          string s;
          cin>>s;
          for(auto c:s)
          {
            if(c=='D'){
                v[i]++;
                if(v[i]==10)
                {
                    v[i]=0;
                }
            }
            else{
                v[i]--;
                if(v[i]==-1)
                {
                    v[i]=9;
                }
            }
          }
        }
        for(int i=0; i<n; ++i) {
          cout<<v[i]<<" ";
        }cout<<endl;
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
