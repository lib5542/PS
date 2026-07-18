#include <bits/stdc++.h>

using namespace std;

void solve() {
    string n;
    cin >> n;
    int result = 2;
    for (int i = 1; i <= 15; i++) {
        result *= 2;
    }
    cout << result;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}