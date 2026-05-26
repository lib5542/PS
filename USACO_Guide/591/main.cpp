#include <iostream>
#include <cstdio>

using namespace std;

void solve() {

    freopen("promote.in", "r", stdin);
    freopen("promote.out", "w", stdout);

    pair<int, int> bronze;
    pair<int, int> silver;
    pair<int, int> gold;
    pair<int, int> platinum;

    cin >> bronze.first >> bronze.second;
    cin >> silver.first >> silver.second;
    cin >> gold.first >> gold.second;
    cin >> platinum.first >> platinum.second;

    int to_platinum = platinum.second - platinum.first;
    int to_gold = gold.second - (gold.first - to_platinum);
    int to_silver = silver.second - (silver.first - to_gold);

    cout << to_silver << "\n";
    cout << to_gold << "\n";
    cout << to_platinum;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}