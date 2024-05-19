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
            int m = n*(n-1);
            m/=2;
            int ar[n+3];
            for(int i=0;i<m;i++)cin>>ar[i];
            sort(ar,ar+m);
            int i=0;
            int j=1;
            while(i<m)
            {
                    cout<<ar[i]<<" ";
                    i+=(n-j);
            }
            cout<<1e9<<endl;
    }
}
