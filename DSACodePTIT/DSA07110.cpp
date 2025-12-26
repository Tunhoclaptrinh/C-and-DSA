#include <bits/stdc++.h>
using namespace std;

bool match(char open, char close) {
  if (open == '(' && close == ')')
    return true;
  if (open == '[' && close == ']')
    return true;
  if (open == '{' && close == '}')
    return true;
  return false;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    bool ok = true;
    cin >> s;
    stack<char> st;
    for (char c : s) {
      if (c == '(' || c == '[' || c == '{') {
        st.push(c);
      } else {
        if (st.empty() || !match(st.top(), c)) {
          ok = !ok;
          break;
        }
        st.pop();
      }
    }

    if (ok && st.empty()) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}