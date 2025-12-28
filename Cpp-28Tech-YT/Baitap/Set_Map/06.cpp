#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  cin.ignore();

  while (t--) {
    string s;
    getline(cin, s);
    set<char> st;

    for (int i = 0; i < s.length(); i++) {
      if (s[i] >= 'a' && s[i] <= 'z') {
        st.insert(s[i]);
      } else if (s[i] >= 'A' && s[i] <= 'Z') {
        st.insert(s[i] + 32);
      }
    }

    if (st.size() == ('z' - 'a' + 1)) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}