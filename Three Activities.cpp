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
        vector<pair<int,int> >a,b,c;
        for(int i=1; i<=n; i++)
        {
            int x;
            cin>>x;
            a.push_back({x,i});
        }
        for(int i=1; i<=n; i++)
        {
            int x;
            cin>>x;
            b.push_back({x,i});
        }
        for(int i=1; i<=n; i++)
        {
            int x;
            cin>>x;
            c.push_back({x,i});
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        sort(c.begin(),c.end());

        int ans = 0;
        cout<<"ok"<<endl;


        for (int i = n-1; i>=n-3; i--)
        {
            for (int j = n-1; j>=n-3;j--)
            {
                for (int k=n-1;k>=n-3;k--)
                {

                    if (a[i].second != b[j].second && b[j].second != c[k].second && c[k].second != a[i].second)
                    {
                        ans = max(ans, a[i].first + b[j].first + c[k].first);
                    }

                }
            }
        }

        cout<<"no"<<endl;
        cout << ans << endl;
    }
}
