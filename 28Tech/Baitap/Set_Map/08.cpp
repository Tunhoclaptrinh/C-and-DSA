#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  cin.ignore();
  while (t--) {
    string s;
    getline(cin, s);
    stringstream ss(s);

    map<string, int> mp;

    int maxFreq = 0;
    for (string s; ss >> s;) {
      mp[s]++;
      if (mp[s] > maxFreq) {
        maxFreq = mp[s];
      }
    }

    for (auto it = mp.begin(); it != mp.end(); it++) {
      if (it->second == maxFreq) {
        cout << it->first << " " << it->second << endl;
        break;
      }
    }
  }

  return 0;
}