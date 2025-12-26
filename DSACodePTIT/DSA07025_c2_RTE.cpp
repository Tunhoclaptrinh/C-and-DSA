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

    vector<string> bieuthucRv;
    for (int i = bieuthuc.size() - 1; i >= 0; i--) {
      bieuthucRv.push_back(bieuthuc[i]);
    }

    stack<ll> st;
    for (int i = bieuthucRv.size() - 1; i >= 0; i--) {
      string cur = bieuthucRv[i];

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
