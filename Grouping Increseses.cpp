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
            int ans = 0;
            int a,b;
            a=INT_MAX;
            b=INT_MAX;
            for(int i=0;i<n;i++)
            {
                    if(a>b)swap(a,b);
                    int x;
                    cin>>x;
                    if(x<=a)a=x;
                    else if(x<=b)b=x;
                    else
                    {
                            ans++;
                            a=x;
                    }
            }
            cout<<ans<<endl;
    }
}
