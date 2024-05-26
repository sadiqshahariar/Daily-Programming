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
    vector<int>row[n+3],col[n+3];
    vector<int>d1,d2;
    int ans = -1;
    for(int i=0;i<m;i++)
    {
            int val = ar[i];
            int row1 = (val+(n-1))/n;
            int col1 = val%n;
            if(col1==0)col1 = n;

            row[row1].push_back(val);
            col[col1].push_back(val);
            if(row1==col1)d1.push_back(val);
            if(row1+col1 == n+1)d2.push_back(val);



            if(row[row1].size()==n || col[col1].size()==n || d1.size()==n || d2.size()==n)
            {
                    ans=i+1;
                    break;
            }
    }
    cout<<ans<<endl;
}
