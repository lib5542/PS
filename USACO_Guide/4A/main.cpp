#include <iostream>

using namespace std;

void solve() {
    int w;
    cin >> w;

    if (w == 2) {
        cout << "NO";
        return;
    }

    if (w % 2 == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}