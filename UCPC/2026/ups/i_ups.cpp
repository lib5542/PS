#include <bits/stdc++.h>

using namespace std;

void solve() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        string result = "Yes";

        long long odd_sum = 0;
        long long even_sum = 0;
        long long max_num = -1;

        vector<long long> A(N);

        for (int i = 0; i < N; i++) {
            long long a;
            cin >> a;

            max_num = max(a, max_num);

            if (i % 2 == 1) even_sum += a;
            else odd_sum += a;

            A[i] = a;
        }

        long long c_prev = 0;
        long long c = 0;
        long long X = odd_sum - even_sum;

        if (N % 2 == 0) {
            long long c_even = 0;

            for (int i = 0; i < N; i+=2) {
                c_even += A[i] - A[i+1];
                if (c_even < 0) result = "No";
            }
            if (c_even != 0) result = "No";
            if (odd_sum != even_sum) result = "No";
        } else {
            for (int i = 0; i < N; i++) {
                c = X - A[i] - c_prev;
                if (c < 0) result = "No";
                c_prev = c;
            }
            if (c != 0) result = "No";
            if (odd_sum - even_sum < max_num) result = "No";
        }
        
        cout << result << "\n";

    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}