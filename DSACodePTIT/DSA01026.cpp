#include <bits/stdc++.h>
using namespace std;

bool next(string &s) {
  int i = s.size() - 1;
  while (i >= 0 && s[i] == '8') {
    s[i] = '6';
    i--;
  }
  if (i == -1)
    return false;
  s[i] = '8';
  return true;
}

bool check(const string &s) {
  if (s[0] != '8' || s.back() != '6')
    return false;

  for (int i = 0; i < s.size() - 1; i++) {
    if (s[i] == '8' && s[i + 1] == '8') {
      return false;
    }
  }

  for (int i = 0; i < s.size() - 3; i++) {
    if (s[i] == '6' && s[i + 1] == '6' && s[i + 2] == '6' && s[i + 3] == '6') {
      return false;
    }
  }

  return true;
}

int main() {
  int n;
  cin >> n;

  string s(n, '6');

  do {

    if (check(s)) {
      cout << s << endl;
    }

  } while (next(s));

  return 0;
}
