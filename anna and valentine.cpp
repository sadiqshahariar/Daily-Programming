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
            int n,m;
            cin>>n>>m;
            vector<int>v;
            int cnt = 0;
            for(int i=0;i<n;i++)
            {
                    int x;
                    cin>>x;
                    string s = to_string(x);
                    int j = s.size()-1;
                    int zero=0;
                    while(j>=0 && s[j]=='0')
                    {
                            zero++;
                            j--;
                    }
                    if(zero>0)v.push_back(zero);
                    cnt += s.size()-zero;
            }
            sort(v.begin(),v.end());
            for(int i=v.size()-2;i>=0;i-=2)cnt+=v[i];
            if(cnt>m)cout<<"Sasha"<<endl;
            else cout<<"Anna"<<endl;
    }
}
