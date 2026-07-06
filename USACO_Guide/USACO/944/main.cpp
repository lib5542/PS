#include <bits/stdc++.h>

using namespace std;

pair<int, int> pos[100001];
vector<int> graph[100001];
bool visited[100001];
int max_x, max_y, min_x, min_y;

void dfs(int node) {
    for (const auto& adj : graph[node]) {
        if (!visited[adj]) {
            visited[adj] = true;
            max_x = max(max_x, pos[adj].first);
            max_y = max(max_y, pos[adj].second);
            min_x = min(min_x, pos[adj].first);
            min_y = min(min_y, pos[adj].second);
            dfs(adj);
        }
    }
}

void solve() {
    int N, M;
    cin >> N >> M;

    for (int i = 1; i < N+1; i++) cin >> pos[i].first >> pos[i].second;
    for (int i = 1; i < M+1; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    int result = 1000000000;
    for (int i = 1; i < N+1; i++) {
        if (!visited[i]) {
            visited[i] = true;
            max_x = pos[i].first;
            max_y = pos[i].second;
            min_x = pos[i].first;
            min_y = pos[i].second;
            dfs(i);
            result = min(result, (max_x-min_x)*2 + (max_y-min_y)*2);
        }
    }
    cout << result;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("fenceplan.in", "r", stdin);
    freopen("fenceplan.out", "w", stdout);

    solve();

    return 0;
}