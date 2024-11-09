#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
    {
        ll a,b,c;
        cin>>a>>b>>c;
        if(a+b==c)
        {
            cout<<"+"<<endl;
        }
        else{
            cout<<"-"<<endl;
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
