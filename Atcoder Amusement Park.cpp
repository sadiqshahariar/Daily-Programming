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
    int n,k;
    cin>>n>>k;
    int ar[n+3];
    for(int i=0;i<n;i++)cin>>ar[i];
    int sum = 0;
    int ans = 0;
    for(int i=0;i<n;i++)
    {
            sum+=ar[i];
            if(sum>k)
            {
                    ans++;
                    sum=ar[i];
            }
            else if(sum==k)
            {
                    ans++;
                    sum=0;
            }
    }
    if(sum>0)ans++;
    cout<<ans<<endl;
}
