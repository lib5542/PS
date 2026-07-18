#include <bits/stdc++.h>

using namespace std;

void solve() {

    int N;
    cin >> N;

    if (N % 2 == 0) {
        cout << N/2 << "\n";
        for (int i = 0; i < N/2; i++) {
            cout << 2 << " ";
        }
    } else {
        if (N == 3) {
            cout << 1 << "\n" << 3 << "\n";
        } else {
            cout << N/2 << "\n";
            for (int i = 0; i < N/2-1; i++) {
                cout << 2 << " ";
            }
            cout << 3;
        }
    }

}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}