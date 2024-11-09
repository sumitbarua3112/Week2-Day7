        #include<bits/stdc++.h>
        #define ll long long
        using namespace std;
        int main()
        {
            ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
            ll t;
            cin>>t;
            while(t--)
            {
                ll n,m;
                cin>>n>>m;
               string s;
               cin>>s;
               vector<ll>v(m);
                for(int i=0;i<m;i++)
                {
                    cin>>v[i];
                }
                string c;
                cin>>c;
                sort(c.begin(),c.end());
                sort(v.begin(),v.end());
                ll sz=unique(v.begin(),v.end())-v.begin();
                 for(int i=0;i<sz;i++)
                {

                    swap (s[v[i]-1],c[i]);
                }
                cout<<s<<endl;

            }
        }
