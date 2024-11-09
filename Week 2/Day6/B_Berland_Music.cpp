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
        string s;
        cin>>s;
        map<ll,ll>a,b;
        ll c=0;
        for(int i=0; i<n; ++i) {
          if(s[i]=='1')
          {
             c++;
             a[v[i]]=i;
          }
          else{
            b[v[i]]=i;
          }
        }
        ll m=n-c;
        vector<ll>v1(n);
        for(auto [x,y]:a)
        {
            m++;
            v1[y]=m;
        }
        ll i=0;
        for(auto [x,y]:b)
        {
            i++;
            v1[y]=i;
        }
        for(int i=0; i<n; ++i) {
          cout<<v1[i]<<" ";
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
