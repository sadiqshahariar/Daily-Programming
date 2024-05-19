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
            ll ar[n+3];
            for(int i=0;i<n;i++)cin>>ar[i];
            ll x;

            for(int i=0;i<64;i++)
            {
                    int zero=0,one=0;
                    for(int j=0;j<n;j++)
                    {
                            if((ar[j]&1)==0)zero++;
                            else one++;
                            ar[j]=(ar[j]>>1);
                    }
                    if(zero!=0 && one!=0)
                    {
                            x=i+1;
                            break;
                    }
            }
            ll ans = pow(2,x);
            cout<<ans<<endl;
    }
}
