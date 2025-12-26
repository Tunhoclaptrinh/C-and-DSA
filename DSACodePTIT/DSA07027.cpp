#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    long long arr[n];
    long long res[n];

    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    stack<long long> st;
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
    cout << endl;
  }

  return 0;
}