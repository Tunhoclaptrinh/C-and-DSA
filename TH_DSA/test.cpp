#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    vector<string> res(s.size());
    stack<int> st;

    for (int i = 0; i < s.size(); i++) {
      if (s[i] == '(') {
        st.push(i);
      } else if (s[i] == ')') {
        if (!st.empty()) {
          int pos = st.top();
          st.pop();
          res[i] = '1';
          res[pos] = '0';
        } else {
          res[i] = "-1";
        }
      }
    }
    while (!st.empty()) {
      res[st.top()] = "-1";
      st.pop();
    }
  }

  return 0;
}