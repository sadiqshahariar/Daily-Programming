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
            int ar[n+3];
            ll sum=0;
            for(int i=0;i<n;i++)
            {
                    cin>>ar[i];
                    sum+=ar[i];
            }
            sort(ar,ar+n);
            ll cnt = 0;
            ll sum2 = 0;
            int i=n-1;
            while(sum2<sum/2)
            {
                    sum2+=ar[i];
                    cnt++;
                    i--;
            }
            cout<<(sum+1)/2 + cnt<<endl;
    }
}
