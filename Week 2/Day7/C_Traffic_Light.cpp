#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
    {
        ll n ;
        cin>>n;
        string s,s1;
        cin>>s>>s1;
        s1+=s1;
        ll f=0;
        ll c=0,r=0;
        if(s[0]=='g')
        {
            cout<<0<<endl;
            return ;
           
        }
        for(int i=0; i<s1.size(); ++i) {
          if(s1[i]=='g')
          {
            r=max(r,c);
            f=0;
          }
          if(s1[i]==s[0] && f==0)
          {
            f=1;
            c=0;
          }
          if(f==1)
          {
            c++;
          }
        }
        cout<<r<<endl;

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
