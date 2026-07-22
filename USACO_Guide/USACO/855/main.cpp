#include <bits/stdc++.h>

using namespace std;

void pour(pair<int, int>& a, pair<int, int>& b) {
    if (a.second > b.first-b.second) {
        a.second -= b.first-b.second;
        b.second = b.first;
    } else {
        b.second += a.second;
        a.second = 0;
    }
}

void solve() {
    vector<pair<int, int>> cap(3);
    for (int i = 0; i < 3; i++) {
        int a, b;
        cin >> cap[i].first >> cap[i].second;
    }
    for (int i = 0; i < 33; i++) {
        pour(cap[0], cap[1]);
        pour(cap[1], cap[2]);
        pour(cap[2], cap[0]);
    }
    pour(cap[0], cap[1]);

    cout << cap[0].second << "\n";
    cout << cap[1].second << "\n";
    cout << cap[2].second << "\n";

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);

    solve();

    return 0;
}