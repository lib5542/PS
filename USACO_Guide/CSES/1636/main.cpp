#include <bits/stdc++.h>

using namespace std;

const int divider = 1e9 + 7;

void solve() {
    int n, x;
    cin >> n >> x;

    vector<int> dp(x+1, 0);
    dp[0] = 1;

    vector<int> c(n);
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = c[i]; j <= x; j++) {
            dp[j] += dp[j-c[i]];
            dp[j] %= divider;
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