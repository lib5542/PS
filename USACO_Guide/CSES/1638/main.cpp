#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vll = vector<ll>;

const ll divider = 1e9 + 7;

void solve() {
    int n;
    cin >> n;

    vector<vector<char>> map_arr(n);
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (auto& c : s) map_arr[i].push_back(c);
    }

    if (map_arr[0][0] == '*') {
        cout << 0;
        return;
    }

    vector<vll> dp(n, vll(n, 0));

    dp[0][0] = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (map_arr[i][j] != '*') {
                if (i-1 >= 0) {
                    if (map_arr[i-1][j] != '*') {
                        dp[i][j] = max(dp[i][j], dp[i][j]+dp[i-1][j]);
                        dp[i][j] %= divider;
                    }
                }
                if (j-1 >= 0) {
                    if (map_arr[i][j-1] != '*') {
                        dp[i][j] = max(dp[i][j], dp[i][j]+dp[i][j-1]);
                        dp[i][j] %= divider;
                    }
                }
            }
        }
    }
    cout << dp[n-1][n-1];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}