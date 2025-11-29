#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  cin.ignore();

  while (t--) {
    string s;
    getline(cin, s);
    int arr[26];

    for (int i = 0; i < s.length(); i++) {
      if (s[i] >= 'a' && s[i] <= 'z') {
        arr[s[i] - 'a'] = 1;
      } else if (s[i] >= 'A' && s[i] <= 'Z') {
        arr[s[i] - 'A'] = 1;
      }
    }

    bool flag = true;
    for (int i = 0; i < 26; i++) {
      if (arr[i] == 0) {
        flag = false;
        break;
      }
    }

    if (flag) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}