#include <bits/stdc++.h>

using namespace std;

void solve() {
    int T;
    cin >> T;

    int t = T;

    while (t--) {
        int N;
        cin >> N;

        vector<int> money(N);
        for (auto& x : money) cin >> x;

        int m500 = 0;
        int m1000 = 0;
        int counter = 0;

        for (int i = 0; i < N; i++) {
            if (money[i] == 500) {
                m500 += 1;
                counter += 1;
            } else if (money[i] == 1000) {
                if (m500 >= 1) {
                    m1000 += 1;
                    m500 -= 1;
                    counter += 1;
                } else {
                    break;
                }
            } else if (money[i] == 5000) {
                if (m1000 >= 4 && m500 >= 1) {
                    m1000 -= 4;
                    m500 -= 1;
                    counter += 1;
                } else if (m1000 >= 3 && m500 >= 3) {
                    m1000 -= 3;
                    m500 -= 3;
                    counter += 1;
                } else if (m1000 >= 2 && m500 >= 5) {
                    m1000 -= 2;
                    m500 -= 5;
                    counter += 1;
                } else if (m1000 >= 1 && m500 >= 7) {
                    m1000 -= 1;
                    m500 -= 7;
                    counter += 1;
                } else if (m500 >= 9) {
                    m500 -= 9;
                    counter += 1;
                } else {
                    break;
                }
            }
        }
        cout << "Case#" << T-t << "\n";
        cout << counter << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}