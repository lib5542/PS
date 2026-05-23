#include <iostream>
#include <string>

using namespace std;

void solve() {
    string x;
    cin >> x;

    for (int i = 0; i < x.length(); i++) {
        int n = x[i] - '0';
        if (i == 0 && n == 9) {
            cout << 9;
        } else {
            cout << min(n, 9-n);
        }
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}