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

int solve(vector<int>&v , int val)
{
        int i=0,j=v.size()-1;
        int ans=0;
        while(i<=j)
        {
                int mid = (i+j)/2;
                if(v[mid]<=val)
                {
                        ans=mid;
                        i=mid+1;
                }
                else j=mid-1;
        }
        return ans;
}

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int> > v;
    vector<int>v1;
    for(int i=0;i<n;i++)
    {
            int a,b;
            cin>>a>>b;
            v.push_back({a,b});
            v1.push_back(a);
    }
    sort(v.begin(),v.end());
    sort(v1.begin(),v1.end());
    ll ans = 0;
    for(int i=0;i<n;i++)
    {
            int x = v[i].second;
            int val = solve(v1,x);
            ans+=val-i;
    }
    cout<<ans<<endl;
}
