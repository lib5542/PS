#include <bits/stdc++.h>

using namespace std;

bool dfs(int node, vector<vector<int>>& adj, vector<bool>& visited, vector<int>& color) {
    for (auto neig : adj[node]) {
        if (visited[neig] == false) {
            visited[neig] = true;
            color[neig] = 3 - color[node];
            if (dfs(neig, adj, visited, color) == false) return false;
        } else {
            if (color[neig] == color[node]) {
                return false;
            }
        }
    }
    return true;
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

    vector<bool> visited(n+1, false);
    vector<int> color(n+1, 0);

    for (int i = 1; i <= n; i++) {
        if (visited[i] == false) {
            visited[i] = true;
            color[i] = 1;
            if (dfs(i, adj, visited, color) == false) {
                cout << "IMPOSSIBLE";
                return;
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << color[i] << " ";
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}