#include <bits/stdc++.h>
using namespace std;

void prev(string &s) {
  int i = s.size() - 1;
  while (i >= 0 && s[i] == '0') {
    s[i] = '1';
    i--;
  }

  if (i != -1) {
    s[i] = '0';
  } else {
    for (int j = 0; j < s.size() - 1; j++) {
      s[j] == '1';
    }
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;

    prev(s);

    cout << s << endl;
  }

  return 0;
}