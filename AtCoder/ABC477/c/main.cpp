#include <bits/stdc++.h>

using namespace std;

void solve() {
    int Q;
    cin >> Q;

    string S;
    cin >> S;

    string T;
    cin >> T;

    vector<int> arr(S.size(), -1);
    int idx = -1;
    for (int i = S.size()-T.size(); i >= 0; i--) {
        bool b = true;
        for (int j = 0; j < T.size(); j++) {
            if (S[i+j] != T[j]) {
                b = false;
                break;
            }
        }
        if (b) {
            idx = i;
        }
        arr[i] = idx;
    }

    for (int i = 0; i < Q; i++) {
        int L, R;
        cin >> L >> R;

        if (arr[L-1] == -1) cout << "No\n";
        else {
            if (arr[L-1] + T.size() <= R) cout << "Yes\n";
            else cout << "No\n";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}