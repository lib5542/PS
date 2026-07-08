#include <bits/stdc++.h>

using namespace std;

void solve() {
    int N, M;
    cin >> N >> M;

    vector<int> A(N);
    vector<int> B(M);

    for (int i = 0; i < N; i++) cin >> A[i];
    for (int i = 0; i < M; i++) cin >> B[i];

    vector<int> dp_A(N, 0);
    vector<int> dp_B(M, 0);

    int sumA = 0;
    for (int i = 0; i < N; i++) {
        sumA += A[i];
        dp_A[i] = sumA;
    }

    int sumB = 0;
    for (int i = 0; i < M; i++) {
        sumB += B[i];
        dp_B[i] = sumB;
    }
    
    // A와 B의 부분수열의 합끼리의 곱이 최대가 되도록 하는 방법

    int maxA = *max_element(dp_A.begin(), dp_A.end());
    int minA = *min_element(dp_A.begin(), dp_A.end());

    int maxB = *max_element(dp_B.begin(), dp_B.end());
    int minB = *min_element(dp_B.begin(), dp_B.end());

    cout << max(maxA*minB, max(minA*maxB, max(minA*minB, max((maxA-minA)*(maxB-minB), maxA*maxB)))) << "\n";

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}