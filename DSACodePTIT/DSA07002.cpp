#include <bits/stdc++.h>
using namespace std;

int main() {
  int qr;
  cin >> qr;
  stack<int> st;
  while (qr--) {
    string s;
    int n;
    cin >> s;

    if (s == "PUSH") {
      cin >> n;
      st.push(n);
    }
    if (s == "POP") {
      if (!st.empty()) {
        st.pop();
      }
    }
    if (s == "PRINT") {
      if (st.empty()) {
        cout << "NONE" << endl;
      } else {
        cout << st.top() << endl;
      }
    }
  }

  return 0;
}