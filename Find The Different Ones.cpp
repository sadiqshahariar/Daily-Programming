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
            for(int i=1;i<=n;i++)cin>>ar[i];
            int ind[n+3];
            ind[1]=0;
            for(int i=2;i<=n;i++)
            {
                    if(ar[i]!=ar[i-1])ind[i]=i-1;
                    else ind[i]=ind[i-1];
            }
            int q;
            cin>>q;
            while(q--)
            {
                    int l,r;
                    cin>>l>>r;
                    int x = r;
                    int y = ind[r];
                    if(y<l)cout<<-1<<" "<<-1<<endl;
                    else cout<<x<<" "<<y<<endl;
            }
    }
}
