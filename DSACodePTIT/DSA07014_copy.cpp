#include <bits/stdc++.h>
using namespace std;

long long calc(long long a, long long b, string op) {
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
  cin.ignore();
  while (t--) {
    // int n;
    // cin >> n;
    // cin.ignore();

    string s;
    getline(cin, s);
    // stringstream ss(s);
    vector<string> tokens;
    // string token;
    // while (ss >> token)
    //   tokens.push_back(token);
    for (int i = 0; i < s.size(); i++) {
      tokens.push_back(string(1, s[i]));
    }

    stack<long long> st;
    for (int i = tokens.size() - 1; i >= 0; i--) {
      string cur = tokens[i];
      if (cur == "+" || cur == "-" || cur == "*" || cur == "/") {
        long long a = st.top();
        st.pop();
        long long b = st.top();
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