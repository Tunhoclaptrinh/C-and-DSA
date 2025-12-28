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

    set<string> st;

    for (string s; ss >> s;) {
      st.insert(s);
    }

    cout << st.size() << endl;
  }

  return 0;
}