#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin.ignore();
    getline(cin, s);
    stringstream ss(s);
    // >>
    string word;
    int cnt = 0;

    vector<string> v;

    while (ss >> word) {
      v.push_back(word);
      cnt++;
    }

    cout << cnt << endl;
    cout << v.size() << endl;
  }

  return 0;
}
// python java  php C++ => 4