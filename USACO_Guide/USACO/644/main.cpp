#include <bits/stdc++.h>

using namespace std;

vector<int> graph[3001];
bool visited[3001];
bool closed[3001];

void dfs(int node) {
    for (const int& adj : graph[node]) {
        if (!visited[adj] && !closed[adj]) {
            visited[adj] = true;
            dfs(adj);
        }
    }
    
}

void solve() {
    int N, M;
    cin >> N >> M;

    for (int i = 1; i < M+1; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    int counter = 0;

    for (int j = 1; j < N+1; j++) {
        if (!visited[j]) {
            visited[j] = true;
            counter += 1;
            dfs(j);
        }
    }
    if (counter == 1) cout << "YES" << "\n";
    else cout << "NO" << "\n";
    

    for (int i = 0; i < N-1; i++) {
        for (int j = 1; j < N+1; j++) visited[j] = 0;
        int counter = 0;
        int closedNum;
        cin >> closedNum;
        closed[closedNum] = true;

        for (int j = 1; j < N+1; j++) {
            if (!visited[j] && !closed[j]) {
                visited[j] = true;
                counter += 1;
                dfs(j);
            }
        }
        if (counter == 1) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("closing.in", "r", stdin);
    freopen("closing.out", "w", stdout);

    solve();

    return 0;
}