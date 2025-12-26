#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int query;
    cin >> query;
    queue<int> q;
    while (query--) {
      int a;
      cin >> a;
      if (a == 1) {
        cout << q.size();
      } else if (a == 2) {
        if (q.empty()) {
          cout << "YES";
        } else {
          cout << "NO";
        }
      } else if (a == 3) {
        int n;
        cin >> n;
        q.push(n);
      } else if (a == 4) {
        if (!q.empty()) {
          q.pop();
        }
      } else if (a == 5) {
        if (!q.empty()) {
          cout << q.front();
        } else {
          cout << -1;
        }
      } else if (a == 6) {
        if (!q.empty()) {
          cout << q.back();
        } else {
          cout << -1;
        }
      }
      cout << endl;
    }
  }

  return 0;
}