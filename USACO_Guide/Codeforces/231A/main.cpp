#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;

    int result = 0;

    for (int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a+b+c >= 2) result++;
    }

    cout << result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}