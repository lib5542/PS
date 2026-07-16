#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;

    vector<int> h(n);
    vector<int> s(n);

    for (int i = 0; i < n; i++) cin >> h[i];
    for (int i = 0; i < n; i++) cin >> s[i];

    vector<vector<int>> dp(n, vector<int>(x+1, 0));

    for (int j = 0; j <= x; j++) {
        if (h[0] <= j) dp[0][j] = s[0];
    }

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < x+1; j++) {
            dp[i][j] = dp[i-1][j];
            if (j-h[i]>=0) dp[i][j] = max(dp[i][j], dp[i-1][j-h[i]]+s[i]);
        }
    }

    cout << dp[n-1][x];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}