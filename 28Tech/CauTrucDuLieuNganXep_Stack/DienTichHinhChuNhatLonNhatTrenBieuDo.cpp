#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n], b[n];
  for (int &x : a)
    cin >> x;
  stack<int> st;
  int res = INT_MIN;

  int i = 0;
  while (i < n) {
    if (st.empty() || a[i] >= a[st.top()]) {
      st.push(i);
      i++;
    } else {
      int idx = st.top(); // chỉ số của cột ở đỉnh stack
      st.pop();
      // tính toán hcn tao bởi cột hiện tại, trong đó cột hiện tại
      // đuược coi là ngắn nhất của hcn đó
      if (st.empty()) {
        res = max(res, i * a[idx]);
      } else {
        res = max(res, (i - st.top() - 1) * a[idx]);
      }
    }
  }

  while (!st.empty()) {
    int idx = st.top(); // chỉ số của cột ở đỉnh stack
    st.pop();
    // tính toán hcn tao bởi cột hiện tại, trong đó cột hiện tại
    // đuược coi là ngắn nhất của hcn đó
    if (st.empty()) {
      res = max(res, i * a[idx]);
    } else {
      res = max(res, (i - st.top() - 1) * a[idx]);
    }
  }

  cout << res << endl;

  return 0;
}