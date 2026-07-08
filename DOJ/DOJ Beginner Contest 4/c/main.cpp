#include <bits/stdc++.h>

using namespace std;

void solve() {
    int N;
    cin >> N;

    vector<long long> x(N);
    vector<long long> y(N);

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }

    long long max_x = *max_element(x.begin(), x.end());
    long long min_x = *min_element(x.begin(), x.end());

    long long max_y = *max_element(y.begin(), y.end());
    long long min_y = *min_element(y.begin(), y.end());

    long long result = 2*(max_x - min_x) + 2*(max_y - min_y);

    cout << result << "\n"; 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}