#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  string remove;

  getline(cin, s);
  cin >> remove;

  stringstream ss(s);
  string word;
  vector<string> v;
  while (ss >> word) {
    if (word != remove) {
      v.push_back(word);
    }
  }

  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << ' ';
  }

  return 0;
}