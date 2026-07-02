#include <iostream>

using namespace std;

void solve() {
    int k, n, w;
    cin >> k >> n >> w;

    int num_banana = w*(w+1)/2;
    int price = k*num_banana;

    if (price > n) {
        cout << price-n;
    } else {
        cout << 0;
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}