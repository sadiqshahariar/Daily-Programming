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
            int a,b,k;
            cin>>a>>b>>k;
            if(b<k)cout<<b-a<<endl;
            else{
                int ans = b%k;
                b = b-(b%k);
                while(b/k>=a)
                {
                        ans++;
                        b/=k;
                        ans+=b%k;
                        b=b-(b%k);
                }
                ans+=b-a;
                cout<<ans<<endl;
            }
    }
}
