#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
    {
        string s,s1;
        cin>>s>>s1;
        ll cnt=0;
        for(int i=0; i<s.size(); ++i) {
          if(s[i]!=s1[i])
          {
            cnt++;
          }
        }
        cout<<cnt<<endl;
        
    }
int main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    
        solve();
    
}
