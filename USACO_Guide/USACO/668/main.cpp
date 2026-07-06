#include <bits/stdc++.h>

using namespace std;

pair<int, int> pos[201];
int rad[201];
vector<int> graph[201];
bool visited[201];

void dfs(int node, int& counter) {
    for (const int& adj : graph[node]) {
        if (!visited[adj]) {
            visited[adj] = true;
            counter += 1;
            dfs(adj, counter);
        }
    }
}

void solve() {
    int N;
    cin >> N;
    for (int i = 1; i < N+1; i++) {
        cin >> pos[i].first >> pos[i].second >> rad[i];
    }
    for (int i = 1; i < N+1; i++) {
        for (int j = 1; j < N+1; j++) {
            if (i != j) {
                int distance = (pos[i].first - pos[j].first)*(pos[i].first - pos[j].first) + (pos[i].second-pos[j].second)*(pos[i].second-pos[j].second);
                if (rad[i]*rad[i] >= distance) {
                    graph[i].push_back(j);
                }
            }
        }
    }
    int max_counter = 0;
    for (int i = 1; i < N+1; i++) {
        for (int j = 1; j < N+1; j++) visited[j] = false;
        visited[i] = true;
        int counter = 1;
        dfs(i, counter);
        max_counter = max(max_counter, counter);
    }
    cout << max_counter;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("moocast.in", "r", stdin);
    freopen("moocast.out", "w", stdout);

    solve();

    return 0;
}