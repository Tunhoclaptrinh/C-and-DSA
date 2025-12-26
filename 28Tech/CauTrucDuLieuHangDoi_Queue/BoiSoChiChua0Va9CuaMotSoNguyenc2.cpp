#include <bits/stdc++.h>
using namespace std;

string arr[501];

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

void init() {
  string s = "000000000000000000";
  arr[0] = s;
  int i = 1;
  while (next(s) && i < 501) {
    arr[i++] = s;
  }
}

int main() {
  int t;
  cin >> t;
  init();

  while (t--) {
    int n;
    cin >> n;

    for (int j = 0; j < 500; j++) {
      if (stoll(arr[j]) != 0 && stoll(arr[j]) % n == 0) {
        cout << stoll(arr[j]) << endl;
        break;
      }
    }
  }
  return 0;
}