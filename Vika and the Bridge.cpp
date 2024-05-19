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
            int n,k;
            cin>>n>>k;
            vector<int>v[k+3];
            for(int i=1;i<=n;i++)
            {
                    int x;
                    cin>>x;
                    v[x].push_back(i);
            }
            for(int i=1;i<=k;i++)v[i].push_back(n);

            vector<int>v2[k+3];
            int ans = INT_MAX,cnt=0;
            for(int i=1;i<=k;i++)
            {
                    v2[i].push_back(v[i][0]-1);
                    for(int j=1;j<v[i].size();j++)
                    {
                            int x;
                            if(j==v[i].size()-1)
                            {
                                    x = v[i][j]-v[i][j-1];
                            }
                            else x = v[i][j]-v[i][j-1]-1;

                            v2[i].push_back(x);
                    }
                    sort(v2[i].begin(),v2[i].end());
                    int cnt1 = v2[i].size();
                    int y = v2[i][cnt1-1];
                    int yy = v2[i][cnt1-2];
                    int z = y/2;

                    ans=min(ans,max(z,yy));

            }
            cout<<ans<<endl;
    }
}
