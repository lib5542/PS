#include <bits/stdc++.h>

using namespace std;

void solve() {
    int N;
    cin >> N;

    long long max_a = LONG_LONG_MIN;
    long long max_b = LONG_LONG_MIN;

    long long min_a = LONG_LONG_MAX;
    long long min_b = LONG_LONG_MAX;

    for (int i = 0; i < N; i++) {
        long long a;
        cin >> a;
        max_a = max(a, max_a);
        min_a = min(a, min_a);
    }

    for (int i = 0; i < N; i++) {
        long long b;
        cin >> b;
        max_b = max(b, max_b);
        min_b = min(b, min_b);
    }

    long long result = max(max_a*max_b, min_a*min_b);
    result = max(result, max_a*min_b);
    result = max(result, min_a*max_b);

    cout << result << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}