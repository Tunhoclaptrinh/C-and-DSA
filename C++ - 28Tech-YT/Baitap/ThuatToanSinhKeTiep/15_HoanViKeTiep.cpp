#include <bits/stdc++.h>
using namespace std;

bool next(string &s) {
  int i = s.size() - 2;
  while (i >= 0 && s[i] - '0' >= s[i + 1] - '0') {
    i--;
  }
  if (i == -1) {
    return false;
  } else {
    int j = s.size() - 1;
    while (j > i && s[i] >= s[j]) {
      j--;
    }
    swap(s[i], s[j]);
    reverse(s.begin() + i + 1, s.end());
    return true;
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int stt;
    string s;
    cin >> stt >> s;

    if (next(s)) {
      cout << stt << " " << s << endl;
    } else {
      cout << stt << " " << "BIGGEST" << endl;
    }
  }

  return 0;
}