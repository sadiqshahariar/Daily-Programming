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
    int t;
    cin>>t;
    while(t--)
    {
            ll n,x,y;
            cin>>n>>x>>y;
            ll a = n/x;
            ll b = n/y;
            ll lcm = (x*y)/__gcd(x,y);
            ll c = n/lcm;
            a-=c;
            b-=c;
            x = n-a;
            ll ans1 = (n*(n+1))/2 - (x*(x+1))/2;
            ll ans2 = (b*(b+1))/2;
            ll ans = ans1-ans2;
            cout<<ans<<endl;
    }
}
