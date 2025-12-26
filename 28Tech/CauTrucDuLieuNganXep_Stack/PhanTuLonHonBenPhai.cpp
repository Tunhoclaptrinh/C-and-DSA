#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int &x : arr)
    cin >> x;
  stack<int> st;
  int res[n];

  for (int i = 0; i < n; i++) {
    if (st.empty()) {
      st.push(i);
    } else {
      while (!st.empty() && arr[st.top()] < arr[i]) {
        res[st.top()] = arr[i];
        st.pop();
      }
      st.push(i);
    }
  }

  while (!st.empty()) {
    res[st.top()] = -1;
    st.pop();
  }

  for (int x : res) {
    cout << x << ' ';
  }

  return 0;
}