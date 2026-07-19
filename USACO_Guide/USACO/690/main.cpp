#include <bits/stdc++.h>

using namespace std;

int getCost(vector<int>& arr, int K) {

    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < K; i++) {
        pq.push(arr[i]);
    }
    for (int i = K; i < arr.size(); i++) {
        int t = pq.top();
        pq.pop();
        pq.push(t + arr[i]);
    }
    while (pq.size() != 1) pq.pop();
    return pq.top();
}

void solve() {
    int N, T;
    cin >> N >> T;

    vector<int> d(N);

    for (int i = 0; i < N; i++) cin >> d[i];

    int left = 1;
    int right = N;
    int ans;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (getCost(d, mid) > T) {
            left = mid + 1;
        } else {
            right = mid - 1;
            ans  = mid;
        }
    }

    cout << ans << "\n";

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("cowdance.in", "r", stdin);
    freopen("cowdance.out", "w", stdout);

    solve();

    return 0;
}