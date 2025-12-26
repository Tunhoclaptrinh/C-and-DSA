#include <bits/stdc++.h>
using namespace std;

int N, X[100];

void inkq() {
  for (int i = 1; i <= N; i++) {
    cout << X[i];
  }
  cout << endl;
}

void Try(int i) {
  // Duyet cac kha nang cua X[i];
  for (int j = 0; j <= 1; j++) {
    X[i] = j;
    if (i == N) {
      inkq();
    } else {
      Try(i + 1);
    }
  }
}

void Try2(int i, int j) {
  X[i] = j;
  if (i == N) {
    inkq();
  } else {
    Try2(i + 1, 0);
    Try2(i + 1, 1);
  }
}

int main() {
  cin >> N;
  // Try(1);
  // hoặc
  Try2(1, 0);
  Try2(1, 1);
  return 0;
}