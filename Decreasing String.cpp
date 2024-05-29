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
        faster
    ll t;
    cin>>t;
    while(t--)
    {
            string s;
            cin>>s;
            ll n;
            cin>>n;
            ll cnt=0;
            map<ll,ll>mp;
            ll sz = s.size();
            char ch;
            ll i=0;
            ll msz = s.size();
            while(1)
            {
                    if(sz>=n)
                    {
                            ll age = sz - (msz-cnt);
                            for(ll j=0;j<s.size();j++)
                            {
                                    if(mp[j]!=0)continue;
                                    age++;
                                    if(age==n)
                                    {
                                            ch=s[j];
                                            break;
                                    }
                            }
                            break;
                    }
                    else
                    {
                            cnt++;
                            sz+=(msz-cnt);
                            if(i>=s.size()-1)
                            {
                                    ll z = s.size()-1;
                                    while(mp[z]!=0)
                                    {
                                            s.pop_back();
                                            z--;
                                    }
                                    s.pop_back();

                            }
                            else
                            {
                                    while(i<s.size()-1)
                                    {
                                            if(s[i]>s[i+1])break;
                                            i++;
                                    }
                                    mp[i]=1;
                            }
                    }
            }
            cout<<ch;
    }
}
