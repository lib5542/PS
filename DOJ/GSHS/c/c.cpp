#include <bits/stdc++.h>

using namespace std;

void solve() {
    int N, M;
    cin >> N >> M;

    vector<pair<double, double>> a(N);
    vector<pair<double, double>> b(M);

    for (int i = 0; i < N; i++) cin >> a[i].first >> a[i].second;
    for (int i = 0; i < M; i++) cin >> b[i].first >> b[i].second;

    double closest = (a[0].first-b[0].first)*(a[0].first-b[0].first) + (a[0].second-b[0].second)*(a[0].second-b[0].second);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            double new_closest = (a[i].first-b[j].first)*(a[i].first-b[j].first) + (a[i].second-b[j].second)*(a[i].second-b[j].second);
            closest = min(closest, new_closest);
        }
    }
    cout << sqrt(closest);
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}