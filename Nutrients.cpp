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
    int n,m;
    cin>>n>>m;
    int ar[m+3];
    for(int i=0;i<m;i++)cin>>ar[i];
    int v[n][m];
    int sum[m+3]={0};
    for(int i=0;i<n;i++)
    {
            for(int j=0;j<m;j++)
            {
                    int x;
                    cin>>x;
                    sum[j]+=x;
            }
    }
    int ans = 0;
    for(int i=0;i<m;i++)
    {
            if(ar[i]>sum[i])
            {
                    ans=1;
                    break;
            }
    }
    if(ans==1)cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
}
