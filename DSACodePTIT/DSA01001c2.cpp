#include <bits/stdc++.h>
using namespace std;

int ok;

void next(string &s) {
  int i = s.size() - 1;
  while (i >= 0 && s[i] == '1') {
    s[i] = '0';
    i--;
  }

  if (i == -1) {
    ok = 0;
  } else {
    s[i] = '1';
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    ok = 1;

    next(s);

    cout << s << endl;
  }

  return 0;
}