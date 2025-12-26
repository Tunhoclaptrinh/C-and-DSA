#include <bits/stdc++.h>
using namespace std;

int calc(long long a, long long b, string op) {
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
  cin.ignore();

  while (t--) {
    string s;
    getline(cin, s);
    vector<string> tokens;
    stringstream ss(s);
    string token;

    while (ss >> token) {
      tokens.push_back(token);
    }

    stack<long long> st;
    for (int i = tokens.size() - 1; i >= 0; i--) {
      string cur = tokens[i];
      if (cur == "+" || cur == "-" || cur == "*" || cur == "/") {
        long long a = st.top();
        st.pop();
        long long b = st.top();
        st.pop();

        st.push((calc(a, b, cur)));
      } else {
        st.push(stoll(cur));
      }
    }

    cout << st.top() << endl;
  }

  return 0;
}