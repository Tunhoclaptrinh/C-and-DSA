#include <bits/stdc++.h>
#define ll long long;
using namespace std;

int X[17], n;
void print() {
  for (int i = 1; i <= n; i++) {
    if (X[i] == 0)
      cout << 'H';
    else
      cout << "A";
  }

  cout << endl;
}

void TRY(int i) {
  if (i == 1) {
    X[i] = 0;
    TRY(i + 1);
    return;
  }

  if (i == n) {
    X[i] = 1;
    print();
    return;
  }

  for (int j = 0; j <= 1; j++) {
    X[i] = j;
    if (X[i] == 0 && X[i - 1] == 0)
      continue;
    TRY(i + 1);
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    cin >> n;

    TRY(1);
  }

  return 0;
}