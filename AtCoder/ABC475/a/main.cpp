#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s;
    cin >> s;

    cout << s[0];
    for (int i = 1; i < s.size(); i++) {
        cout << 'o' << s[i];
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}