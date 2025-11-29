#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  cin.ignore();

  while (t--) {
    string s;
    getline(cin, s);

    map<string, int> mp;

    stringstream ss(s);
    for (string s; ss >> s;) {
      mp[s]++;
      if (mp[s] == 2) {
        cout << s << " " << mp[s] << endl; // in ra ngay từ lần thứ 2
        break;
      }
    }
  }

  return 0;
}