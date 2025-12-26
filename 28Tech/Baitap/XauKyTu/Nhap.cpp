#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  cin.ignore();

  while (t--) {
    string s;
    int x;
    cin >> s >> x;
    if (s.size() < x) {
      cout << "NO";
      break;
    } else {
      for (int i = s.size() - x; i < s.size(); i++) {
        if (i == s.size() - 1) {
          cout << "YES";
        } else if (s[i] != '0') {
          cout << "NO";
          break;
        }
      }
    }

    cout << endl;
  }

  return 0;
}
