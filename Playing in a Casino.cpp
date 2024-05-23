#include<bits/stdc++.h>
using  namespace  std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

#define faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl      '\n'
#define pi          acos(-1.0)
#define mod               1000000007

typedef long long int ll;
typedef unsigned long long int  llu;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
            ll n,m;
            cin>>n>>m;
            ll ar[n+3][m+3];
            for(ll i=0;i<n;i++)
            {
                    for(ll j=0;j<m;j++)
                    {
                            cin>>ar[i][j];
                    }
            }

            ll ans = 0;
            for(ll i=0;i<m;i++)
            {
                    vector<ll>v;
                    for(ll j=0;j<n;j++)
                    {
                            v.push_back(ar[j][i]);
                    }
                    sort(v.begin(),v.end());
                    for(ll j=0;j<n;j++)
                    {
                            ans+=(v[j] * (j-n+j+1));
                    }
            }
            cout<<ans<<endl;
    }
}
