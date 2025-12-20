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

    vector<string> fullName;

    string token;
    while (ss >> token) {
      fullName.push_back(token);
    }

    for (int i = 0; i < fullName.size() - 1; i++) {
      cout << (char)toupper(fullName[i][0]);
      for (int j = 1; j < fullName[i].size(); j++) {
        cout << (char)tolower(fullName[i][j]);
      }
      cout << ' ';
    }
    for (int i = 0; i < fullName.back().size(); i++) {
      cout << (char)toupper(fullName.back()[i]);
    }
    cout << endl;
  }

  return 0;
}