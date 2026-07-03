#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e5;
vector<int> graph[MAX+1];
bool visited[MAX+1];
vector<int> rep;

void dfs(int node) {
    visited[node] = true;
    for (const auto& adj : graph[node]) {
        if (!visited[adj]) dfs(adj);
    }
}

void solve() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for (int i = 1; i < n+1; i++) {
        if (!visited[i]) {
            rep.push_back(i);
            dfs(i);
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