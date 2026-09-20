#include <bits/stdc++.h>

using namespace std;

void solve() {
    string S;
    cin >> S;

    if (S[S.size()-1] == 'e') {
        cout << S << "r";
    } else cout << S << "er";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}