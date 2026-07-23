#include <bits/stdc++.h>

using namespace std;

void solve() {
    int N;
    cin >> N;

    vector<int> result_counter(26, 0);
    for (int i = 0; i < N; i++) {
        string up, down;
        cin >> up >> down;
        vector<int> up_counter(26, 0);
        vector<int> down_counter(26, 0);
        for (int j = 0; j < up.length(); j++) up_counter[up[j]-'a']++;
        for (int j = 0; j < down.length(); j++) down_counter[down[j]-'a']++;
        for (int i = 0; i < 26; i++) result_counter[i] += max(up_counter[i], down_counter[i]);
    }
    for (int i = 0; i < 26; i++) {
        cout << result_counter[i] << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("blocks.in", "r", stdin);
    freopen("blocks.out", "w", stdout);

    solve();

    return 0;
}