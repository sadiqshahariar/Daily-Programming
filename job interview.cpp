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

int solve(vector<int>v , int val)
{
        int i=0;
        int j=v.size()-1;
        while(i<=j)
        {
                int mid=(i+j)/2;

                if(v[mid]==val)return mid;
                else if(v[mid]>val )j=mid-1;
                else i=mid+1;
        }
}
int main()
{
       // faster
    int t;
    cin>>t;
    while(t--)
    {
            int n,m;
            cin>>n>>m;
            int ar[n+m+3];
            int br[m+n+4];;

            for(int i=0;i<n+m+1;i++)
            {
                    cin>>ar[i];

            }
            for(int i=0;i<n+m+1;i++)
            {
                    cin>>br[i];
            }
            ll sum = 0;
            vector<int>v;
            int a=0,b=0;
            for(int i=0;i<n+m;i++)
            {
                  if(ar[i]>br[i])
                  {
                          if(a<n)
                          {
                                  sum+=ar[i];
                                  a++;
                                  v.push_back(0);
                          }
                          else
                          {
                                  b++;
                                  sum+=br[i];
                                  v.push_back(1);
                          }
                  }
                  else
                  {
                          if(b<m)
                          {
                                  b++;
                                  sum+=br[i];
                                  v.push_back(1);
                          }
                          else
                          {
                                  a++;
                                  sum+=ar[i];
                                  v.push_back(0);
                          }
                  }
            }
            vector<ll>ans;
            ans.push_back(sum);
            int rpa=n+m,rta=n+m;
            for(int i=n+m-1;i>=0;i--)
            {
                    if(v[i]==0)
                    {
                           sum-=ar[i];
                           sum+=ar[rpa];

                           if(ar[i]>br[i])
                           {
                                   rpa=i;
                           }
                           else rta=i;
                    }
                    else
                    {
                            sum-=br[i];
                            sum+=br[rta];
                            if(ar[i]>br[i])
                           {
                                   rpa=i;
                           }
                           else rta=i;
                    }
                    ans.push_back(sum);
            }
            for(int i=ans.size()-1;i>=0;i--)cout<<ans[i]<<" ";
            cout<<endl;


    }
}
