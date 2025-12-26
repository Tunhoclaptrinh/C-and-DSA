#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll calc(ll a, ll b, string op) {
  if (op == "+")
    return a + b;
  if (op == "-")
    return a - b;
  if (op == "*")
    return a * b;
  return a / b;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<string> bieuthuc;

    for (int i = 0; i < n; i++) {
      string s;
      cin >> s;
      bieuthuc.push_back(s);
    }

    stack<ll> st;
    for (int i = 0; i < bieuthuc.size(); i++) {
      string cur = bieuthuc[i];

      if (cur == "+" || cur == "-" || cur == "*" || cur == "/") {
        ll b = st.top();
        st.pop();

        ll a = st.top();
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