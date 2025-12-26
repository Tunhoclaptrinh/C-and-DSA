#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  cin.ignore();
  while (t--) {
    string s;
    getline(cin, s);
    stack<int> st;
    vector<int> ans;

    int stt = 0;

    for (int i = 0; i < s.size(); i++) {
      if (s[i] == '(') {
        stt++;
        st.push(stt);
        ans.push_back(stt);
      } else if (s[i] == ')') {
        int top = st.top();
        st.pop();
        ans.push_back(top);
      }
    }

    for (int x : ans) {
      cout << x << " ";
    }
    cout << "\n";
  }

  return 0;
}