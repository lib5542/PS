#include <bits/stdc++.h>

using namespace std;

void solve() {
    int N, Q;
    cin >> N >> Q;

    vector<bool> tiles(N+1, false);
    vector<int> tile_step(N+1, Q+1);
    vector<char> tile_color(N+1, 'a');

    char c = 'a';
    int cur_step = Q;

    while (Q--) {
        int i;
        cin >> i;

        if (i == 1) {

            int x;
            cin >> x;


            // 타일 놓기
            if (tiles[x] == false) {
                tiles[x] = true;

                tile_color[x] = c;


            // 타일 빼기
            } else {
                tiles[x] = false;
                tile_step[x] = Q;
            }

        } else {

            cin >> c;
            cur_step = Q;

        }
    }

    for (int i = 1; i <= N; i++) {
        if (tiles[i] == false && tile_step[i] > cur_step) cout << c;
        else cout << tile_color[i];
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}