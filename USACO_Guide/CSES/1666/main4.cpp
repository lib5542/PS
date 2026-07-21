#include <bits/stdc++.h>

using namespace std;

void dfs(int node, vector<vector<int>>& adj, vector<bool>& visit_arr) {
    for (auto neighbor : adj[node]) {
        if (visit_arr[neighbor] == false) {
            visit_arr[neighbor] = true;
            dfs(neighbor, adj, visit_arr);
        }
    }
}

void solve() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n+1);

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<bool> visit_arr(n+1, false);

    vector<int> rep;
    int counter = -1;
    for (int i = 1; i <= n; i++) {
        if (visit_arr[i] == false) {
            visit_arr[i] = true;
            rep.push_back(i);
            counter += 1;
            dfs(i, adj, visit_arr);
        }
    }
    cout << counter << "\n";
    for (int i = 0; i < counter; i++) {
        cout << rep[i] << " " << rep[i+1] << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}