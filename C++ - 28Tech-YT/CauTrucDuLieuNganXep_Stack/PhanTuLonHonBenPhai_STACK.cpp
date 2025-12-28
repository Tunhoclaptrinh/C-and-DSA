#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];
  int result[n]; // để lưu kết quả
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  stack<int> st; // lưu chỉ số
  for (int i = 0; i < n; i++) {
    if (st.empty()) {
      st.push(i);
    } else {
      while (!st.empty() && arr[st.top()] < arr[i]) {
        result[st.top()] = arr[i];
        st.pop();
      }
      st.push(i);
    }
  }

  while (!st.empty()) {
    result[st.top()] = -1;
    st.pop();
  }

  for (int x : result) {
    cout << x << ' ';
  }

  return 0;
}