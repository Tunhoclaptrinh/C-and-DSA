#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int &x : arr)
    cin >> x;
  stack<int> st;
  int res = INT_MIN;

  int i = 0;
  while (i < n) {
    if (st.empty() || arr[i] >= arr[st.top()]) {
      st.push(i);
      i++;
    } else {
      int idx = st.top();
      st.pop();
      if (st.empty()) {
        res = max(res, arr[idx] * i);
      } else {
        res = max(res, (i - st.top() - 1) * arr[idx]);
      }
    }
  }

  while (!st.empty()) {
    int idx = st.top();
    st.pop();
    if (st.empty()) {
      res = max(res, arr[idx] * i);
    } else {
      res = max(res, (i - st.top() - 1) * arr[idx]);
    }
  }

  cout << res << endl;

  return 0;
}