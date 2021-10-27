#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb(x) push_back(x)
#define mp(a,b) make_pair(a,b)

void solve()
{ 
  ll t;
  cin>>t;
  while(t--)
  {
     ll n,k;
     cin>>n>>k;
     std::vector<ll> v;
     for(ll i=1;i<=n;i++)
     {
          v.pb(i);
     }
     if(abs(n-k)==1)
     {
          cout<<-1<<endl;
     }
     else
     {
          for(ll i=k;i<n-1;i++)
          {
               swap(v[i],v[i+1]);
          }
          for(auto x:v)
               cout<<x<<" ";
          cout<<endl;
     }
  }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}

