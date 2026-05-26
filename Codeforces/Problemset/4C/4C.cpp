#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    /*
    소수 출력 사용 시
    cout << fixed;
    cout.precision(10);
    */


    int n;
    cin >> n;
    string s;

    unordered_map<string, int> mp;

    for (int i = 0; i < n; i++) {
        cin >> s;
        if (!mp.count(s)) {
            cout << "OK\n";
            mp[s] = 1;
        }
        else {
            cout << s << mp[s] << "\n";
            mp[s]++;
        }
    }

    return 0;
}