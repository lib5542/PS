#include <bits/stdc++.h>

using namespace std;

void solve() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> rule(N); 
    for (int i = 0; i < N; i++) {
        int l, s;
        cin >> l >> s;
        rule[i].push_back(l);
        rule[i].push_back(s);
    }
    for (int i = 1; i < N; i++) rule[i][0] += rule[i-1][0];
    vector<vector<int>> player(M);
    for (int i = 0; i < M; i++) {
        int l, s;
        cin >> l >> s;
        player[i].push_back(l);
        player[i].push_back(s);
    }
    for (int i = 1; i < M; i++) player[i][0] += player[i-1][0];

    int rulecounter = 0;
    int playercounter = 0;
    int maxv = 0;
    for (int i = 0; i <= 100; i++) {
        if (i > rule[rulecounter][0]) rulecounter++;
        if (i > player[playercounter][0]) playercounter++;
        maxv = max(maxv, player[playercounter][1]-rule[rulecounter][1]);
    }
    if (maxv > 0) cout << maxv;
    else cout << 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);

    solve();

    return 0;
}