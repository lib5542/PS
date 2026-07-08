#include <bits/stdc++.h>

using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        if (n == 1) {
            cout << a[0] << "\n";
            continue;
        }

        vector<vector<int>> dp(n, vector<int>(2, (int) 1e9));

        dp[0][0] = a[0];
        dp[1][0] = a[0] + a[1];
        dp[1][1] = a[0];

        for (int i = 2; i < n; i++) {
            dp[i][0] = min(dp[i-1][1]+a[i], dp[i-2][1]+a[i-1]+a[i]);
            dp[i][1] = min(dp[i-1][0], dp[i-2][0]);
        }

        cout << min(dp[n-1][1], dp[n-1][0]) << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}