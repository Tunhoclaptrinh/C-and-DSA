#include <bits/stdc++.h>
using namespace std;

bool isOp(string c) {
  if (c == "+" || c == "-" || c == "*" || c == "/")
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
      string c = string(1, exp[i]);
      if (isOp(c)) {
        string a = st.top();
        st.pop();
        string b = st.top();
        st.pop();

        st.push("(" + a + c + b + ")");
      } else {
        st.push(c);
      }
    }

    // loại bỏ ngoặc thừa bên ngoài
    // string res = st.top();
    // res.erase(0, 1);
    // res.erase(res.size() - 1, 1);
    // cout << res << endl;

    // or not
    cout << st.top() << endl;
  }
  return 0;
}