#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll calc(ll a, ll b, char op) {
  if (op == '+')
    return a + b;
  if (op == '-')
    return a - b;
  if (op == '*')
    return a * b;
  return a / b;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    stack<ll> st;
    for (int i = 0; i < s.size(); i++) {
      char cur = s[i];

      if (cur == '+' || cur == '-' || cur == '*' || cur == '/') {
        ll b = st.top();
        st.pop();

        ll a = st.top();
        st.pop();

        st.push(calc(a, b, cur));
      } else {
        st.push(s[i] - '0');
      }
    }

    cout << st.top() << endl;
  }

  return 0;
}