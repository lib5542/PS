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

        vector<vector<int>> dp(n, vector<int>(2, INT_MAX));
        dp.push_back(vector<int>(2, 0));
        dp.push_back(vector<int>(2, 0));
        a.push_back(0);
        a.push_back(0);

        for (int i = n-1; i >= 0; i--) {
            dp[i][0] = min(a[i]+dp[i+1][1], a[i]+a[i+1]+dp[i+2][1]);
            dp[i][1] = min(dp[i+1][0], dp[i+2][0]);
        }
        cout << dp[0][0] << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}