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
            int n;
            cin>>n;
            vector<pair<int,int> > v;
            for(int i=0;i<n;i++)
            {
                    int x,y;
                    cin>>x>>y;
                    v.push_back({y,x});
            }
            sort(v.begin(),v.end());
            ll ans = 0;
            ordered_set os;
            for(int i=n-1;i>=0;i--)
            {
                    int a = v[i].second;
                    ans += os.order_of_key(a);
                    os.insert(a);
            }
            cout<<ans<<endl;
    }
}
