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
    int n;
    cin>>n;
    vector<pair<int,int> >v;
    ll sum=0;
    for(int i=0;i<n;i++)
    {
            int a,b;
            cin>>a>>b;
            v.push_back({a,b});
            sum+=a;
    }
    ll ans = 0;
    for(int i=0;i<n;i++)
    {
            ll x = sum-v[i].first;
            x+=v[i].second;
            ans=max(ans,x);
    }
    cout<<ans<<endl;
}
