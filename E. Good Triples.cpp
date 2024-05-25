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
            string n;
            cin>>n;
            map<int,int>mp;
            for(int i=0;i<=9;i++)
            {
                    for(int j=0;j<=9;j++)
                    {
                            for(int k=0;k<=9;k++)
                            {
                                    mp[i+j+k]++;
                            }
                    }
            }
            ll ans = 1;
            for(int i=0;i<n.size();i++)
            {
                    int x = n[i]-'0';
                    ans*=mp[x];
            }
            cout<<ans<<endl;
    }
}
