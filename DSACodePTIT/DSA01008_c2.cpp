#include <bits/stdc++.h>
#define ll long long;
using namespace std;

int X[101], N, K;

void print() {
  for (int i = 1; i <= N; i++) {
    cout << X[i];
  }
  cout << endl;
}

void TRY(int i, int cnt) {
  for (int j = 0; j <= 1; j++) {
    X[i] = j;
    if (i == N && cnt + j == K) {
      print();
      return;
    }

    if (i < N) {
      TRY(i + 1, cnt + j);
    }
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    cin >> N >> K;
    TRY(1, 0);
  }

  return 0;
}
