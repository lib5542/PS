#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    // 인덱스 1부터 시작
    vector<vector<int>> graph(n+1);
    vector<int> team(n+1, 0);
    queue<int> graph_queue;

    for (int i = 1; i < m+1; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for (int i = 1; i < n+1; i++) {
        if (team[i] == 0) {
            team[i] = 1;
            graph_queue.push(i);
        }

        while (!graph_queue.empty()) {
            int current = graph_queue.front();
            graph_queue.pop();

            for (const auto& adj : graph[current]) {
                if (team[adj] == 0) {
                    team[adj] = 3 - team[current];
                    graph_queue.push(adj);
                }
                else if (team[adj] == team[current]) {
                    cout << "IMPOSSIBLE";
                    return;
                }
            }
        }
    }

    for (int i = 1; i < n+1; i++) {
        cout << team[i] << " ";
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}