#include <bits/stdc++.h>

using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int cost = 0;
        if (a[0] == 1) cost += 1;

        if (n > 3) {
           for (int i = 1; i < n-2; i++) {
                if (a[i] && a[i+1] && a[i+2]) {
                    cost++;
                    i += 2;
                }
            } 
        }
        cout << cost << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}