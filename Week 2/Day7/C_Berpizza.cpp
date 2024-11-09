#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
    {
        ll q,in,index=0;
        cin>>q;
        priority_queue<pair<ll,ll>>pq;
        vector<bool>v;
        ll i=0;
        while(q--)
        {
            cin>>in;
            if(in==1)
            {
                ll n;
                cin>>n;
                pq.push({n,-index});
                v.push_back(false);
                index++;
            }
            else if(in==2)
            {
                while(v[i])
                {
                    i++;
                }
                v[i]=true;
                cout<<i+1<<" ";
            }
            else if(in==3)
            {
                while(v[-pq.top().second])
                {
                
                     pq.pop();
                    
                }
                cout<<-pq.top().second+1<<" ";
                v[-pq.top().second]=true;
                pq.pop();

            }
        }
      
    }
int main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    
        solve();
    
}
