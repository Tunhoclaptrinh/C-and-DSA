#include <bits/stdc++.h>
using namespace std;

bool isRedundant(string s) {
  stack<char> st;

  for (char c : s) {
    if (c == ')') {
      bool hasOp = false;
      while (!st.empty() && st.top() != '(') {
        char top = st.top();
        st.pop();

        if (top == '+' || top == '-' || top == '*' || top == '/') {
          hasOp = true;
        }
      }

      if (!st.empty())
        st.pop(); // pop '('

      if (!hasOp)
        return true;
    } else {
      st.push(c);
    }
  }
  return false;
}

int main() {
  int t;
  cin >> t;
  cin.ignore();
  while (t--) {
    string s;
    getline(cin, s);

    if (isRedundant(s)) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }

  return 0;
}