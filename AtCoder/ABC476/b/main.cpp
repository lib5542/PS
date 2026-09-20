#include <bits/stdc++.h>

using namespace std;

void solve() {
    int N;
    cin >> N;

    string S, T;
    cin >> S;
    cin >> T;

    for (int i = 0; i < N; i++) {
        if (T[i] != '*') {
            if (S[i] != T[i]) {
                cout << "No";
                return;
            }
        }
    }
    cout << "Yes";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}