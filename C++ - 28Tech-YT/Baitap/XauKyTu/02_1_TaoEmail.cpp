#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    cin.ignore();
    string s;
    getline(cin, s);
    stringstream ss(s);
    string token;

    vector<string> fullName;
    while (ss >> token) {
      for (char &x : token) {
        if (x >= 'A' && x <= 'Z') {
          x += 32;
        }
      }

      fullName.push_back(token);
    }

    cout << fullName[fullName.size() - 1];

    for (int i = 0; i < fullName.size() - 1; i++) {
      cout << fullName[i][0];
    }
    cout << "@gmail.com";
  }

  return 0;
}