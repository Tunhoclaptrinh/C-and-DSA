#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    long long arr[n];
    for (long long &x : arr)
      cin >> x;
    stack<int> st;
    long long res = INT_MIN;

    int i = 0;
    while (i < n) {
      if (st.empty() || arr[i] >= arr[st.top()]) {
        st.push(i);
        i++;
      } else {
        int idx = st.top();
        st.pop();
        if (st.empty()) {
          res = max(res, i * arr[idx]);
        } else {
          res = max(res, (i - st.top() - 1) * arr[idx]);
        }
      }
    }

    while (!st.empty()) {
      int idx = st.top();
      st.pop();
      if (st.empty()) {
        res = max(res, i * arr[idx]);
      } else {
        res = max(res, (i - st.top() - 1) * arr[idx]);
      }
    }

    cout << res << endl;
  }

  return 0;
}