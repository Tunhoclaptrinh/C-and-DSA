#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, m;
char arr[1000][1000];

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

void dfs(int i, int j) {
  for (int z = 0; z < 4; z++) {
    int imoi = i + dx[z];
    int jmoi = j + dy[z];
    if (arr[imoi][jmoi] == '#') {
      arr[imoi][jmoi] = '.';
      dfs(imoi, jmoi);
    }
  }
}

int main() {
  int vatcan = 0;
  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (arr[i][j] == '#') {
        vatcan++;
        arr[i][j] = '.';
        dfs(i, j);
      }
    }
  }

  cout << vatcan << endl;

  return 0;
}