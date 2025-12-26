#include <bits/stdc++.h>
using namespace std;

int N, X[1000], K;

void inkq() {
  for (int i = 1; i <= K; i++) {
    cout << X[i];
  }
  cout << endl;
}

void Try(int i) {
  for (int j = X[i - 1] + 1; j <= N - K + i; j++) {
    X[i] = j;
    if (i == K) {
      inkq();
    } else {
      Try(i + 1);
    }
  }
}

int main() {
  cin >> N >> K;
  Try(1);

  return 0;
}