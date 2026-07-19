#include <bits/stdc++.h>

using namespace std;

long long getCost(vector<int>& arr, long long x) {
    int middle = (arr.size()-1) / 2;
    long long cost = 0;
    for (int i = middle; i < (int) arr.size(); i++) {
        cost += max(0LL, x-arr[i]);
    }
    return cost;
}

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    long long left = 0;
    long long right = 2 * 1e9;

    while (left <= right) {
        long long mid = left + (right - left) / 2;
        if (getCost(a, mid) <= (long long) k) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    cout << right << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}