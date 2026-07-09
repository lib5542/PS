#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vll = vector<ll>;

void solve() {
    int N, M;
    cin >> N >> M;

    vll A(N);
    vll B(M);

    for (int i = 0; i < N; i++) cin >> A[i];
    for (int i = 0; i < M; i++) cin >> B[i];

    vll dp_a_max(N+1, INT_MIN);
    vll dp_b_max(M+1, INT_MIN);

    vll dp_a_min(N+1, INT_MAX);
    vll dp_b_min(M+1, INT_MAX);

    for (int i = 1; i <= N; i++) {
        dp_a_max[i] = max(A[i-1], dp_a_max[i-1]+A[i-1]);
        dp_a_min[i] = min(A[i-1], dp_a_min[i-1]+A[i-1]);
    }
    for (int j = 1; j <= M; j++) {
        dp_b_max[j] = max(B[j-1], dp_b_max[j-1]+B[j-1]);
        dp_b_min[j] = min(B[j-1], dp_b_min[j-1]+B[j-1]);
    }

    ll max_a = *max_element(dp_a_max.begin(), dp_a_max.end());
    ll min_a = *min_element(dp_a_min.begin(), dp_a_min.end());

    ll max_b = *max_element(dp_b_max.begin(), dp_b_max.end());
    ll min_b = *min_element(dp_b_min.begin(), dp_b_min.end());

    cout << max({max_a*max_b, min_a*max_b, max_a*min_b, min_a*min_b}) << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}