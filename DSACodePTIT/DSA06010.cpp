#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int arr[n];
    set<int> se;
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
      while (arr[i]) {
        se.insert(arr[i] % 10);
        arr[i] /= 10;
      }
    }

    for (auto it : se)
      cout << it << ' ';

    cout << endl;
  }

  return 0;
}