#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve() {

    ll N, D;
    cin >> N >> D;

    vector<ll> X(N);
    vector<ll> res;

    for (int i = 0; i < N; i++) cin >> X[i];

    for (int i = 0; i < N; i++) {

        bool is_ap = true;

        for (int j = 0; j < N; j++) {
            if (i != j && abs(X[i]-X[j]) < D) {
                is_ap = false;
                break;
            }
        }

        if (is_ap) {
            res.emplace_back(i+1);
        }
    }

    cout << res.size() << "\n";
    for (auto x : res) cout << x << " ";
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}