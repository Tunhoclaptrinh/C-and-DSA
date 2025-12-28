#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  deque<int> dq;
  for (int i = 0; i < k; i++) {
    if (dq.empty() || dq.front() > arr[i]) {
      dq.push_back(arr[i]);
    } else {
      dq.pop_front();
      dq.push_front(arr[i]);
    }
  }

  for (int i = 1; i < n - k; i++) {
    if (dq.empty() || dq.front() > arr[i]) {
      dq.push_back(arr[i]);
    } else {
      dq.pop_front();
      dq.push_front(arr[i]);
    }
  }

  return 0;
}