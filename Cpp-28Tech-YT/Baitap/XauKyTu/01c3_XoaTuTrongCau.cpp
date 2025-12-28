#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  getline(cin, s);
  string word;
  cin >> word;

  stringstream ss(s);
  string token;
  vector<string> v;

  while (ss >> token) {
    if (word != token) {
      v.push_back(token);
    }
  }

  for (int i = 0; i, v.size(); i++) {
    if (i != v.size()) {
      cout << v[i] << ' ';
    } else {
      cout << v[i];
    }
  }

  return 0;
}