#include <bits/stdc++.h>

using namespace std;

void solve() {
    int N, Q;
    cin >> N >> Q;

    vector<int> arr(N);
    for (int& num : arr) cin >> num;
    sort(arr.begin(), arr.end());

    auto atMost = [&arr](int x) {
        int left = 0;
        int right = arr.size();
        while (left < right) {
            int mid = (left+right)/2;
            if (arr[mid] <= x) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        return left;
    };

    for (int i = 0; i < Q; i++) {
        int a, b;
        cin >> a >> b;

        cout << atMost(b) - atMost(a-1) << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("haybales.in", "r", stdin);
    freopen("haybales.out", "w", stdout);

    solve();

    return 0;
}