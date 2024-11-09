#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
    {
        ll n ;
        cin>>n;
        vector<ll> v(n+1);
        for(int i=1; i<=n; ++i) {
            cin>>v[i]; 
        }
        set<ll>st;
        for(int i=1; i<=n; ++i) {
          st.insert(i);
        }
        ll i=1,j=n;
        while(1)
        {
            ll mn=*st.begin();
            ll mx=*st.rbegin();
            ll f=0;
            if(v[i]==mn || v[i]==mx)
            {
                st.erase(v[i]);
                f=1;
                i++;
            }
             if(v[j]==mn || v[j]==mx)
            {
                st.erase(v[j]);
                f=1;
                j--;
            }
            if(f==0 || i>j)
            {
                break;
            }
        }
        if(i>j)
        {
            cout<<-1<<endl;
        }
        else{
            cout<<i<<" "<<j<<endl;
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
