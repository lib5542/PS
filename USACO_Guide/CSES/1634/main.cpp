#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;

    vector<int> dp(x+1, 1e6+1);

    vector<int> c(n);
    for (int i = 0; i < n; i++) {
        cin >> c[i];
        if (c[i] <= x) dp[c[i]] = 1;
    }

    for (int i = 1; i <= x; i++) {
        for (int j = 0; j < n; j++) {
            if (i-c[j] >= 1) dp[i] = min(dp[i], dp[i-c[j]]+1);
        }
    }
    if (dp[x] == 1e6+1) cout << -1;
    else cout << dp[x];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}