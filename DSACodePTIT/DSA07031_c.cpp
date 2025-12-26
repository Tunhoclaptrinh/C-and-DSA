#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll calc(ll a, ll b, string op) {
  if (op == "+")
    return a + b;
  if (op == "*")
    return a * b;
  if (op == "-")
    return a - b;
  return a / b;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<string> tokens;
    for (int i = 0; i < n; i++) {
      string s;
      cin >> s;
      tokens.push_back(s);
    }

    stack<ll> st;
    for (int i = tokens.size() - 1; i >= 0; i--) {
      string cur = tokens[i];
      if (cur == "+" || cur == "-" || cur == "*" || cur == "/") {
        ll a = st.top();
        st.pop();
        ll b = st.top();
        st.pop();

        st.push(calc(a, b, cur));
      } else {
        st.push(stoll(cur));
      }
    }

    cout << st.top() << endl;
  }

  return 0;
}