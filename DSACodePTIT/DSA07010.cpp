#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool isOperator(char c) {
  if (c == '+' || c == '-' || c == '*' || c == '/')
    return true;
  return false;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    string exp;
    cin >> exp;

    stack<string> st;

    // Duyệt từ phải sang trái
    for (int i = exp.size() - 1; i >= 0; i--) {
      char c = exp[i];

      if (isOperator(c)) {
        // lấy 2 toán hạng
        string a = st.top();
        st.pop();
        string b = st.top();
        st.pop();

        // ghép hậu tố
        st.push(a + b + c);
      } else {
        // toán hạng
        st.push(string(1, c));
      }
    }
    // in kết quá
    cout << st.top() << endl;
  }

  return 0;
}