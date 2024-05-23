#include <bits/stdc++.h>
using namespace std;

#define faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long int ll;
typedef pair<ll, int> pli; // pair of (distance, node)

int main() {
    faster;
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> ar(n + 1);
        for (ll i = 1; i <= n; ++i) cin >> ar[i];

        if (n == 1) {
            cout << 0 << endl;
            continue;
        }

        vector<ll> dp(n + 1, LLONG_MAX); // DP array to store the minimum distances
        dp[1] = 0;

        // Traverse each node to calculate the minimum distance to each subsequent node
        for (ll i = 1; i < n; ++i) {
            for (ll j = i + 1; j <= n; ++j) {
                ll weight = (j - i) * max(ar[i], ar[j]);
                dp[j] = min(dp[j], dp[i] + weight);
            }
        }

        // Output the distance to the last node (index n in 1-based indexing)
        cout << dp[n] << endl;
    }
    return 0;
}
