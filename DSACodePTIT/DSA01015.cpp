#include <bits/stdc++.h>
using namespace std;

bool next(string &s) {
  int i = s.size() - 1;
  while (i >= 0 && s[i] == '9') {
    s[i] = '0';
    i--;
  }

  if (i == -1) {
    return false;
  } else {
    s[i] = '9';

    return true;
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s = "000000000000000000";

    while (next(s)) {
      if (stoll(s) % n == 0) {
        cout << stoll(s) << endl;
        break;
      }
    }
  }

  return 0;
}