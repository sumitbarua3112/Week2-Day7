#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
    {
        ll n ;
        cin>>n;
        string a,b;
        cin>>a>>b;
        for(int i=0; i<n; ++i) {
          if(a[i]=='B')
          {
            a[i]='G';
          }
          if(b[i]=='B')
          {
            b[i]='G';
          }
        }
        if(a==b)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
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
