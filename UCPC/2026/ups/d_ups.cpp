#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

void solve() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    sort(A.begin(), A.end(), greater<int>());

    int result = 0;
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            result += A[i];
        } else {
            result -= A[i];
        }
    }
    cout << result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}