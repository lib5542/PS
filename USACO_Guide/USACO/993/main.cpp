#include <bits/stdc++.h>

using namespace std;

void solve() {
    int N, M, C;
    cin >> N >> M >> C;

    vector<int> money(N+1);
    for (int i = 1; i < N+1; i++) cin >> money[i];

    vector<int> road[2001];
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        road[a].push_back(b);
    }

    int max_time = 1000;
    vector<vector<int>> dp(max_time+1, vector<int>(N+1, -1));

    dp[0][1] = 0;
    int ans = 0;

    for (int t = 1; t <= max_time; t++) {
        for (int u = 1; u <= N; u++) {
            if (dp[t-1][u] == -1) continue;
            for (int v : road[u]) {
                dp[t][v] = max(dp[t][v], dp[t-1][u]+money[v]);
            }
        }
        if (dp[t][1] != -1) {
            int current_money = dp[t][1] - C*t*t;
            ans = max(ans, current_money);
        }
    }

    cout << ans;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("time.in", "r", stdin);
    freopen("time.out", "w", stdout);

    solve();

    return 0;
}