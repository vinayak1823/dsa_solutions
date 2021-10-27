#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb(x) push_back(x)
#define mp(a,b) make_pair(a,b)

void solve()
{ 
  ll k;
  cin>>k;
  while(k--)
  {
     ll n,g=0,ans=0;
     cin>>n;
     std::vector<ll> v(n);
     for(ll i=0;i<n;i++)
     {
          cin>>v[i];
          g=__gcd(g,v[i]);

     }
     while(!(g%2))
     {
          ans++;
          g=g>>1;
     }
     cout<<ans<<endl;
  }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}

