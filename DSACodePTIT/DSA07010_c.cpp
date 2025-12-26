#include <bits/stdc++.h>
using namespace std;

bool isOp(char c) {
  if (c == '+' || c == '-' || c == '*' || c == '/')
    return true;
  return false;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    string exp;
    cin >> exp;

    stack<string> st;
    for (int i = exp.size() - 1; i >= 0; i--) {
      char c = exp[i];

      if (isOp(c)) {
        // lay ra cac toan hang
        string a = st.top();
        st.pop();
        string b = st.top();
        st.pop();

        st.push(a + b + c);
      } else {
        st.push(string(1, c));
      }
    }
    cout << st.top() << endl;
  }

  return 0;
}