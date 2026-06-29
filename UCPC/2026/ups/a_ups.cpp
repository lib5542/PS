#include <iostream>

using namespace std;

void solve() {
    int D, M, V;
    cin >> D >> M >> V;

    if (V * (60-M) > D) {
        cout << "run";
    } else {
        cout << "late";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}