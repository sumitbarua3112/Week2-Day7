#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
    {
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,ll>mp;
        for(int i=0; i<n; ++i) {
          mp[s[i]]++;
        }
        ll cnt=0;
        for(auto i:mp)
        {
            if(i.second%2!=0)
            {
                cnt++;
            }
        }
        if(cnt-1<0)
        {
            cnt=0;
        }
        else{
            cnt=cnt-1;
        }
        if(k>=cnt && k<=n)
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
