#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solve() {
    int T;
    cin >> T;
    while (T--) {
        string result = "Yes";
        int N;
        cin >> N;
        vector<int> A(N);

        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        int X = 0;
        for (int i = 0; i < N; i++) {
            // 홀수
            if (i % 2 == 0) X += A[i];
            // 짝수
            else X -= A[i];
        }

        int P = 0;
        if (N % 2 == 0) {
            for (int i = 0; i < N-1; i++) {
                if (i % 2 == 0) {
                    P += A[i];
                } else {
                    P -= A[i];
                    if (P < 0) result = "No";
                }
            }
            P -= A[N-1];
            if (P != 0) result = "No";
        } else {
            for (int i = 0; i < N; i++) {
                if (i % 2 == 0) {
                    P += A[i];
                    if (X-P < 0) result = "No";
                } else {
                    P -= A[i];
                    if (P < 0) result = "No";
                }
            }
        }
        cout << result << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}