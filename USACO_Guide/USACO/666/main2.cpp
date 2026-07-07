#include <bits/stdc++.h>

using namespace std;

void solve() {
    int N, Q;
    cin >> N >> Q;

    vector<int> arr(N);
    for (int &x : arr) cin >> x;
    sort(arr.begin(), arr.end());

    for (int i = 0; i < Q; i++) {
        int a, b;
        cin >> a >> b;

        cout << upper_bound(arr.begin(), arr.end(), b) - lower_bound(arr.begin(), arr.end(), a) << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("haybales.in", "r", stdin);
    freopen("haybales.out", "w", stdout);

    solve();

    return 0;
}