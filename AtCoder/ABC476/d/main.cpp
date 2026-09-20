#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve() {
    ll N, M, K;
    cin >> N >> M >> K;

    ll X, Y;
    cin >> X >> Y;

    vector<ll> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];
    
    vector<ll> B(M);
    for (int i = 0; i < M; i++) cin >> B[i];

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    ll counterY = -1;
    for (int i = 0; i < M; i++) {
        ll payY;
        ll change = 0;
        if (B[i] % K == 0) payY = B[i] / K;
        else {
            payY = (B[i] / K) + 1;
            change = payY * K - B[i];
        }

        if (Y >= payY) {
            Y -= payY;
            X += change;
            counterY = i;
        } else break;
    }

    ll res = 0;
    ll counterX = 0;

    if (counterY == -1) {
        X = X+Y;
        while (counterX < N && X >= A[counterX]) {
            X -= A[counterX];
            counterX++;
        }
        cout << counterX+1;
        return;
    }

    X = X+Y;
    while (counterY >= 0) {
        while (counterX < N && X >= A[counterX]) {
            X -= A[counterX];
            counterX++;
        }




        int i = counterY;
        counterY--;
        ll getX;
        if (B[i] % K == 0) getX = B[i];
        else {
            getX = ((B[i] % K) + 1) * K;
        }
        X += getX;
        while (counterX < N && X >= A[counterX]) {
            X -= A[counterX];
            counterX++;
        }
        res = max(res, counterX+counterY+2);
    }
    cout << res;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}