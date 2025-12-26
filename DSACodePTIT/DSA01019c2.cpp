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

bool check() {
  if (X[1] != 0 || X[n] != 1) {
    return false;
  }

  for (int i = 1; i <= n - 1; i++) {
    if (X[i] == 0 && X[i + 1] == 0)
      return false;
  }

  return true;
}

void TRY(int i) {
  for (int j = 0; j <= 1; j++) {
    X[i] = j;
    if (i == n) {
      if (check()) {
        print();
        return;
      }
    } else {
      TRY(i + 1);
    }
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