#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<bool> visited;

void dfs(int u) {
  visited[u] = true;
  for (int v : adj[u]) {
    if (!visited[v]) {
      dfs(v);
    }
  }
}

int main() {
  int T;
  cin >> T;

  while (T--) {
    int V, E;
    cin >> V >> E;

    adj.assign(V, vector<int>());
    visited.assign(V, false);

    // đọc danh sách cạnh
    for (int i = 0; i < E; i++) {
      int u, v;
      cin >> u >> v;
      v--;
      u--;

      if (u < 0 || u >= V || v < 0 || v >= V)
        continue; // tránh RTE
      adj[u].push_back(v);
      adj[v].push_back(u);
    }

    // thành phần
    int components = 0;

    // đếm số thành phần liên thông
    for (int u = 0; u < V; u++) {
      if (!visited[u]) {
        dfs(u);
        components++;
      }
    }

    cout << components << "\n";
  }

  return 0;
}