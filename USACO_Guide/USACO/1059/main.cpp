#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    vector<int> v;
    for (int i = 0; i < 7; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    cout << v[0] << " " << v[1] << " " << v[6]-v[0]-v[1];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}