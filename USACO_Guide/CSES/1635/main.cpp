#include <bits/stdc++.h>

using namespace std;

const int divider = 1e9 + 7;

void solve() {
    int n, x;
    cin >> n >> x;

    vector<int> dp(x+1, 0);

    vector<int> c(n);
    for (int i = 0; i < n; i++) {
        cin >> c[i];
        if (c[i] <= x) dp[c[i]] = 1;
    }

    for (int i = 1; i <= x; i++) {
        for (int j = 0; j < n; j++) {
            if (i-c[j] >= 1) dp[i] += dp[i-c[j]];
            dp[i] %= divider;
        }
    }

    cout << dp[x];

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}