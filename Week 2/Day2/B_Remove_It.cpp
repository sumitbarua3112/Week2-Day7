#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
    {
        ll n,m;
        cin>>n>>m;
        vector<ll> v;
        for(int i=0; i<n; ++i) {
            ll a;
            cin>>a;
            v.push_back(a);
        }
        for(auto i:v) {
            if(i!=m){
          cout<<i<<" ";
            }
        }
        
    }
int main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
   
        solve();
    
}
