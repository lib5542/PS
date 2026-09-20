#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve() {

    int N;
    cin >> N;

    multiset<ll> s;
    ll a1, a2;
    cin >> a1 >> a2;
    s.emplace(a1);
    s.emplace(a2);

    for (int i = 2; i < N; i++) {
        ll a3;
        cin >> a3;
        s.emplace(a3);

        auto it = s.end();
        it--;
        it--;
        it--;
        cout << *it << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}