#include <bits/stdc++.h>

using namespace std;

void solve() {
    int N;
    cin >> N;

    vector<int> height(N);
    for (int &i : height) cin >> i;

    vector<int> dp(N, 0);
    dp[1] = abs(height[0]-height[1]);

    for (int i = 2; i < N; i++) {
        dp[i] = min(dp[i-1] + abs(height[i]-height[i-1]), dp[i-2] + abs(height[i]-height[i-2]));
    }

    cout << dp[N-1];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}