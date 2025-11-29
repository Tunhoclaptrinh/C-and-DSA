#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  cin.ignore();

  while (t--) {
    map<char, int> mp;
    string s;
    getline(cin, s);

    int maxFreq = 0;
    for (int i = 0; i < s.length(); i++) {
      mp[s[i]]++;
      if (mp[s[i]] > maxFreq) {
        maxFreq = mp[s[i]];
      }
    }

    for (map<char, int>::iterator it = mp.begin(); it != mp.end(); it++) {
      if (it->second == maxFreq) {
        cout << it->first << " " << it->second << endl;
        break;
      }
    }
  }

  return 0;
}