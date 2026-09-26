#include <bits/stdc++.h>

using namespace std;

void solve() {
    char c;
    cin >> c;

    if (c == 'B') cout << 'Y';
    else if (c == 'R') cout << 'B';
    else cout << 'R';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}