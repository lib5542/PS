#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {

        int n;
        cin >> n;

        long long b_sum = 0;
        long long zero_counter = 0;
        for (int i = 0; i < n; i++) {
            int b;
            cin >> b;
            if (b == 0) {
                zero_counter++;
            } else {
                b_sum += b;
            }
        }

        long long answer;
        answer = min(b_sum-n+1, (long long) n-zero_counter);
        cout << answer << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}