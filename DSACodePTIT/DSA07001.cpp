#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  int n;
  stack<int> st;
  while (cin >> s) {
    if (s == "push") {
      cin >> n;
      st.push(n);
    }
    if (s == "pop") {
      st.pop();
    }
    if (s == "show") {
      if (st.empty()) {
        cout << "empty" << endl;
      } else {
        stack<int> tmp = st; // copy stack
        vector<int> v;

        while (!tmp.empty()) {
          v.push_back(tmp.top());
          tmp.pop();
        }

        // v đang bị ngược, đảo lại in đúng thứ tự
        reverse(v.begin(), v.end());

        for (int x : v)
          cout << x << ' ';
        cout << '\n';
      }
    }
  }

  return 0;
}