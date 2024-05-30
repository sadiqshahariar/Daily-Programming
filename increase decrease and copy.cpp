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
            ll n;
            cin>>n;
            ll ar[n+3];
            ll br[n+4];
            for(ll i=0;i<n;i++)cin>>ar[i];
            for(ll i=0;i<=n;i++)cin>>br[i];
            ll ans = 0;
            ll val = br[n];
            ll mn = INT_MAX;

            for(ll i=0;i<n;i++)
            {
                    ll a = min(ar[i],br[i]);
                    ll b = max(ar[i],br[i]);

                    ans += b-a;
                    if(val>=a && val<=b)mn = 1;
                    mn = min(mn, abs(a-val)+1);
                    mn=min(mn,abs(b-val)+1);

            }
            ans+=mn;
            cout<<ans<<endl;
    }
}
