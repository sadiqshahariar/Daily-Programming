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
        ll n;
        cin>>n;
        ll a[n];
        for(int i=0; i<n; i++) cin>>a[i];

        ll mn = a[n-1], ind = n-1;

        vector<pair<ll,ll>>v(n);

        for(int i=n-1; i>=0; i--)
        {
            if(a[i]<=mn)
            {
                mn = a[i];
                ind = i;
            }
            v[i]= {mn,ind};
        }

        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }

        ll cost=0;
        mn = a[0];
        ind = 0;
        ll sum=0;
        for(ll i=1; i<n; i++)
        {
            sum += max(a[i],a[i-1]);

            if(a[i]<mn || a[i]==v[i].first)
            {
                cost += min(sum,(i-ind)*max(mn,a[i]));
                mn = a[i];
                ind = i;
                sum = 0;
            }
        }

        cout<<min(cost,max(a[0],a[n-1])*(n-1))<<endl;
    }
}
