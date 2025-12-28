#include <bits/stdc++.h>
using namespace std;

void chuanHoa(string &s) {
  s[0] = toupper(s[0]);
  for (int i = 1; i < s.length(); i++) {
    s[i] = tolower(s[i]);
  }
}

int main() {
  int t;
  cin >> t;
  cin.ignore();
  while (t--) {
    string s;
    getline(cin, s);

    set<char> st;
    for (int i = 0; i < s.size(); i++) {
      st.insert(s[i]);
    }

    if (st.size() >= 26) {
      cout << "YES";
    } else {
      cout << "NO";
    }

    cout << endl;
  }

  return 0;
}