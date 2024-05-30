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
            string s;
            cin>>s;
            vector<int>d,c;
            for(int i=0;i<n;i++)
            {
                    if(s[i]>='0' && s[i]<='9')d.push_back(i);
                    else c.push_back(i);
            }
            int ans = 0;
            for(int i=1;i<d.size();i++)
            {
                    if(s[d[i]]<s[d[i-1]])
                    {
                            ans=1;
                            break;
                    }
            }
            for(int i=1;i<c.size();i++)
            {
                    if(s[c[i]]<s[c[i-1]])
                    {
                            ans=1;
                            break;
                    }
            }
            if(d.size()>0 && c.size()>0)
            {
                    sort(d.begin(),d.end());
                    sort(c.begin(),c.end());
                    if(c[0]<d[d.size()-1])ans=1;
            }
            if(ans==1)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;

    }
}
