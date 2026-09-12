#include <bits/stdc++.h>

using namespace std;

void solve() {
    int N;
    cin >> N;

    int res[3] = {0, 0, 0};

    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;

        int change;

        if (a % 1000 == 0) {
            change = 0;
        }
        else {
            change = 1000 * ((a / 1000) + 1) - a;
        }

        res[2] += change / 100;
        change %= 100;

        res[1] += change / 10;
        change %= 10;

        res[0] += change;
    }

    cout << res[0] << " " << res[1] << " " << res[2];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}