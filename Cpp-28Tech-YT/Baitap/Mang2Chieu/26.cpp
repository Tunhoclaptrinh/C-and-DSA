#include <bits/stdc++.h>
using namespace std;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

void dfs(char arr[][100], int n, int m, int x, int y) {
  for (int i = 0; i < 4; i++) {
    arr[x][y] = '*';
    int tx = x + dx[i];
    int ty = y + dy[i];
    if (arr[tx][ty] == 'O') {
      arr[tx][tx] = '*';
      dfs(arr, n, m, tx, ty);
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;
  char arr[n][100];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }

  for (int i = 0; i < m; i++) {
    if (arr[0][i] == 'O') {
      dfs(arr, n, m, 0, i);
    }
    if (arr[n - 1][i] == 'O') {
      dfs(arr, n, m, n - 1, i);
    }
  }

  for (int i = 0; i < n; i++) {
    if (arr[i][0] == 'O') {
      dfs(arr, n, m, i, 0);
    }
    if (arr[i][m - 1] == 'O') {
      dfs(arr, n, m, i, m - 1);
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (arr[i][j] == 'O') {
        arr[i][j] = 'X';
      } else if (arr[i][j] == '*') {
        arr[i][j] = 'O';
      }
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}