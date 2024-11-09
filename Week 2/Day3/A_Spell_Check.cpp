#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
    {
    
    ll n;
    cin>>n;
    string s;
        cin>>s;
        sort(s.begin(),s.end());
        if(n!=5){cout<<"NO"<<endl;}

             else if(s[0]=='T' && s[1]=='i' && s[2]=='m' && s[3]=='r' && s[4]=='u')
            {
                cout<<"YES"<<endl;
            }
            else
            {
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
