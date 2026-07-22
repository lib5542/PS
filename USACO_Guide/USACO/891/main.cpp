#include <bits/stdc++.h>

using namespace std;

void swapf(bool arr[], int a, int b) {
    bool temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void solve() {
    int N;
    cin >> N;

    bool start1[3] = {1, 0, 0};
    bool start2[3] = {0, 1, 0};
    bool start3[3] = {0, 0, 1};

    int score[3] = {0, 0, 0};

    for (int i = 0; i < N; i++) {
        int a, b, g;
        cin >> a >> b >> g;

        swapf(start1, a-1, b-1);
        swapf(start2, a-1, b-1);
        swapf(start3, a-1, b-1);

        if (start1[g-1] == true) score[0]++;
        if (start2[g-1] == true) score[1]++;
        if (start3[g-1] == true) score[2]++;
    }

    cout << *max_element(begin(score), end(score));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);

    solve();

    return 0;
}