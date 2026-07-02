#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

void solve() {
    freopen("word.in", "r", stdin);
    freopen("word.out", "w", stdout);

    int N, K;
    cin >> N >> K;
    
    int count = 0;
    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;

        count += s.length();

        if (count <= K) {
            if (count == s.length()) {
                cout << s;
            } else {
                cout << " " << s;
            }
        } else {
            cout << "\n" << s;
            count = s.length();
        }
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}