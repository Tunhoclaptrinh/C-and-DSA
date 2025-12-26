#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e6;
bool nt[MAXN];

void init() {
  for (int i = 0; i < MAXN; i++)
    nt[i] = true;

  nt[0] = nt[1] = false;

  for (int i = 2; i * i < MAXN; i++) {
    if (nt[i]) {
      for (int j = i * i; j < MAXN; j += i) {
        nt[j] = false;
      }
    }
  }
}

int main() {
  init();
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    map<int, int> mp;

    for (int i = 2; i < MAXN; i++) {
      mp[i]++;
      if (nt[i] && nt[n - i]) {
        cout << i << ' ' << n - i << endl;
        break;
      } else if (i == MAXN - 1 || i > n) {
        cout << -1 << endl;
      }
    }
  }

  return 0;
}