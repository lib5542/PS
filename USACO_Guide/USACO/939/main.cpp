#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

void solve() {
    freopen("buckets.in", "r", stdin);
    freopen("buckets.out", "w", stdout);

    int B_i, B_j, R_i, R_j, L_i, L_j;

    for (int i = 0; i < 10; i++) {

        string s;
        cin >> s;

        for (int j = 0; j < 10; j++) {
            if (s[j] == 'B') {B_i = i; B_j = j;}
            if (s[j] == 'R') {R_i = i; R_j = j;}
            if (s[j] == 'L') {L_i = i; L_j = j;}
        }
    }
    if ((B_i == R_i && R_i == L_i)) {
        if (B_j < R_j && R_j < L_j || L_j < R_j && R_j < B_j) {
            cout << abs(L_j - B_j) - 1 + 2;
        } else {
            cout << abs(L_j - B_j) - 1;
        }
    } else if (B_j == R_j && R_j == L_j){
        if (B_i < R_i && R_i < L_i || L_i < R_i && R_i < B_i) {
            cout << abs(L_i - B_i)  - 1 + 2;
        } else {
            cout << abs(L_i - B_i) - 1;
        }
    } else {
        cout << abs(L_i - B_i) + abs(L_j - B_j) - 1;
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}