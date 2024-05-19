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
#define mod               100000000

typedef long long int ll;
typedef unsigned long long int  llu;

int solve(ll ar[],int i,int j,ll val)
{
        int ans = -1;
        while(i<=j)
        {
                int mid = (i+j)/2;
                if(val+ar[mid]<1e8)
                {
                        ans = mid;
                        i=mid+1;
                }
                else
                {
                        j=mid-1;
                }
        }
        return ans;
}

int main()
{
    ll n;
    cin>>n;
    ll ar[n+3];
    for(int i=0;i<n;i++)cin>>ar[i];
    sort(ar,ar+n);
    ll ans = 0;
    ll pre[n+1];
    pre[0]=ar[0];
    for(int i=1;i<n;i++)pre[i]=pre[i-1]+ar[i];
    for(int i=0;i<n;i++)
    {
            int ind = solve(ar,0,n-1,ar[i]);
            cout<<ind<<endl;
            if(ind == -1)ans+=ar[i]*(n-1);
            else
            {
                    if(ind<i)
                    {
                            cout<<"less "<<endl;
                            ans += ar[i]*(ind+1);
                            cout<<ans<<" ";
                            ll x = pre[n-1]- pre[ind];
                            x-=ar[i];
                            cout<<x<<" ";
                            int baki = (n-1)-ind;
                            baki--;
                            cout<<baki<<" ";
                            x+=baki*ar[i];
                            cout<<x<<" ";
                            if(baki>0)ans += x-(baki*mod);
                            cout<<ans<<endl;

                    }
                    else
                    {
                            ans += ar[i]*ind;
                            ll x = ar[n-1]-ar[ind];
                            int nn= n-1;
                            int baki = nn-ind;
                            if(baki >0) ans += -((baki*ar[i])+x)+(mod*(baki+1));
                            cout<<"greater "<<ans<<endl;
                    }
            }

    }
    cout<<ans<<endl;
}
