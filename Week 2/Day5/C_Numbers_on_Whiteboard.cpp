#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
    {
        ll n;
        cin>>n;
        ll a=n,b=n-1;
        ll i=1;
        cout<<2<<endl;
        while(i<n)
        {
           cout<<a<<" "<<b<<endl;
           a=(a+b+1)/2;
           b--;
           i++;
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
