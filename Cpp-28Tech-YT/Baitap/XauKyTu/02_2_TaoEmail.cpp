#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  cin.ignore();

  map<string, int> mp;
  while (t--) {
    string s;
    getline(cin, s);

    stringstream ss(s);
    string token;

    vector<string> fullName;

    while (ss >> token) {
      for (char &c : token) {
        c = tolower(c);
      }

      fullName.push_back(token);
    }

    string tmp = fullName.back();
    for (int i = 0; i < fullName.size() - 1; i++) {
      tmp += fullName[i][0];
    }

    if (mp[tmp] == 0) {
      cout << tmp << "@gmail.com" << endl;
    } else {
      cout << tmp << mp[tmp] + 1 << "@gmail.com" << endl;
    }
    mp[tmp]++;
  }

  return 0;
}
