#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve() {
    ll N, S, L;
    cin >> N >> S >> L;

    vector<ll> A(N-1);
    for (int i = 0; i < N-1; i++) {
        cin >> A[i];
    }

    ll left = S-1;

    ll result = 1;

    while (true) {

        ll counter = 0;
        ll res = 1;
        for (int i = left; i < N-1; i++) {
            counter += A[i];
            if (i < S-1) counter += A[i];
            if (counter > L) break;
            res += 1;
        }
        result = max(result, res);

        left -= 1;
        if (left < 0) break;

    }

    ll right = S-2;
    while (true) {

        ll counter = 0;
        ll res = 1;

        if (right < 0) break;
        if (right > N-2) break;
        for (int i = right; i >= 0; i--) {
            counter += A[i];
            if (i > S-2) counter += A[i];
            if (counter > L) break;
            res += 1;
        }

        result = max(result, res);
        right += 1;
    }

    cout << result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}