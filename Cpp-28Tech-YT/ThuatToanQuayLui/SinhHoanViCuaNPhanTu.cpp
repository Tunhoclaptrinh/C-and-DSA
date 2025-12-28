#include <bits/stdc++.h>
using namespace std;

int N, X[100], used[100];

void inkq() {
  for (int i = 1; i <= N; i++) {
    cout << X[i] << ' ';
  }
  cout << endl;
}

void Try(int i) {
  // Duyệt các khả năng mà X[i] có thể nhận được
  for (int j = 1; j <= N; j++) {
    // xét xem liệu rằng có thể gán X[i] = j hay không
    if (used[j] == 0) {
      X[i] = j;
      used[j] = 1; // đánh dấu
      if (i == N) {
        inkq();
      } else {
        Try(i + 1);
      }
      // backtrack
      used[j] = 0;
    }
  }
}

int main() {
  memset(used, 0, sizeof(used));
  cin >> N;

  Try(1);

  return 0;
}