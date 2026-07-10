#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> dp(n+1, 1e7);
    dp[n] = 0;

    for (int i = n; i >= 0; i--) {
        if (dp[i] != 1e7) {
            string s = to_string(i);
            for (int j = 0; j < s.size(); j++) {
                int s_num = s[j] - '0';
                if (i-s_num >= 0) dp[i-s_num] = min(dp[i-s_num], dp[i]+1);
            }
        }
    }
    
    cout << dp[0];

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}