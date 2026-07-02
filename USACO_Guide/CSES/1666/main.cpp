#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> graph(n+1);
    vector<bool> visited(n+1, 0);
    stack<int> dfs_stack;
    vector<int> rep;

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for (int i = 1; i < n+1; i++) {
        if (visited[i] == 0) {
            visited[i] = 1;
            dfs_stack.push(i);
            rep.push_back(i);
        }
        while (!dfs_stack.empty()) {
            int neighbor = dfs_stack.top();
            dfs_stack.pop();
            for(const auto& adj : graph[neighbor]) {
                if (visited[adj] == 0) {
                    visited[adj] = 1;
                    dfs_stack.push(adj);
                }
            }
        }
    }

    cout << rep.size()-1;
    for (int i = 0; i < rep.size()-1; i++) {
        cout << "\n" << rep[i] << " " << rep[i+1];
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}