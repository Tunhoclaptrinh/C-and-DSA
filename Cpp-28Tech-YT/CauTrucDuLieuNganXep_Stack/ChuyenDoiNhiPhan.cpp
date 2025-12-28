#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  stack<int> st;

  while (n) {
    st.push(n % 2);
    n /= 2;
  }

  while (!st.empty()) {
    cout << st.top();
    st.pop();
  }
  cout << endl;

  // vd 2: python java php c++   js
  string s;
  cin.ignore();
  getline(cin, s);

  stringstream ss(s);
  string token;
  stack<string> str;
  while (ss >> token) {
    str.push(token);
  }

  while (!str.empty()) {
    cout << str.top() << ' ';
    str.pop();
  }

  return 0;
}