#include <bits/stdc++.h>

using namespace std;

void solve() {
    int N;
    cin >> N;

    vector<int> height(N);
    for (int &i : height) cin >> i;

    vector<int> dp(N, INT_MAX);
    dp[0] = 0;

    for (int i = 0; i < N; i++) {
        if (i+1<N) dp[i+1] = min(dp[i+1], abs(height[i+1]-height[i])+dp[i]);
        if (i+2<N) dp[i+2] = min(dp[i+2], abs(height[i+2]-height[i])+dp[i]);
    }

    cout << dp[N-1];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}