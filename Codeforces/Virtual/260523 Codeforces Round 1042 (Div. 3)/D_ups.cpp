#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> edge_num(n+1);
        vector<pair<int, int>> edges;

        for (int i = 0; i < n-1; i++) {
            int u, v;
            cin >> u >> v;
            edge_num[u]++;
            edge_num[v]++;
            edges.push_back({u, v});
        }

        if (n <= 3) {
            cout << "0" << "\n";
            continue;
        }

        int leaves = 0;
        for (int i = 1; i < n+1; i++) {
            if (edge_num[i] == 1) {
                leaves++;
            }
        }

        vector<int> node_leaf_num(n+1);

        for (const auto& [u, v] : edges) {
            if (edge_num[u] == 1) node_leaf_num[v]++;
            if (edge_num[v] == 1) node_leaf_num[u]++;
        }

        cout << leaves - *max_element(node_leaf_num.begin(), node_leaf_num.end()) << "\n";

    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}