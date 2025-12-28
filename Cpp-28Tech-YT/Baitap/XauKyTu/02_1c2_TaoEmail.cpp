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
        x = tolower(x);
      }

      fullName.push_back(token);
    }

    cout << fullName[fullName.size() - 1];
    // hoặc
    // cout << fullName.back();

    for (int i = 1; i < fullName.size() - 2; i++) {
      cout << fullName[i][0];
    }
    cout << "@gmail.com";
  }

  return 0;
}