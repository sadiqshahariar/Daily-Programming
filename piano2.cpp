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
    int ar[n+3],br[m+3];
    vector<pair<int,int> >v;
    int j=0;
    for(int i=0;i<n;i++)
    {
            cin>>ar[i];
            v.push_back({ar[i],j});
            j++;
    }
    for(int i=0;i<m;i++)
    {
            cin>>br[i];
            v.push_back({br[i],j});
            j++;
    }
    sort(v.begin(),v.end());
    int ans = 0;
    for(int i=1;i<v.size();i++)
    {
            int a = v[i-1].second;
            int b = v[i].second;
            if(a<n && b<n)
            {
                    ans=1;
                    break;
            }
    }
    if(ans==1)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

}
