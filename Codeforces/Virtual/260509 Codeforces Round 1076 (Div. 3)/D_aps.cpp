#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin >> n;

    vector<ll> a(n);
    vector<ll> b(n);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) std::cin >> b[i];

    sort(a.begin(), a.end());

    vector<ll> b_prefix_sum(n+1, 0);
    for (int i = 0; i < n; i++) b_prefix_sum[i+1] = b[i] + b_prefix_sum[i];

    ll score = 0;
    int level = n;

    for (int i = 0; i < n; i++) {
        ll x = a[i];
        ll sword = n - i;

        while (level > 0 && b_prefix_sum[level] > sword) {
            level--;
        }

        score = max(score, (ll)x*level);
    }

    cout << score << "\n";

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    return 0;
}