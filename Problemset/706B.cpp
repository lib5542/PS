#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int bs(vector<int> v, int x) {
    int left = 0;
    int right = v.size()-1;
    int m;
    while (left <= right) {
        m = (left+right)/2;
        if (v[m] <= x) left=m+1;
        else right=m-1;
    }
    return right;
}

void solve() {
    int n; cin >> n;
    vector<int> x(n); for (int i = 0; i < n; i++) cin >> x[i];
    sort(x.begin(), x.end());
    int q; cin >> q;
    vector<int> m(q); for (int i = 0; i < q; i++) cin >> m[i];

    for (int i = 0; i < q; i++) {
        cout << bs(x, m[i])+1 << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}