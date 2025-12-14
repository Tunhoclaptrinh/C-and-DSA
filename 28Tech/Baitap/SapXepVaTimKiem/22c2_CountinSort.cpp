#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    int arr[n];
    for (int &x : arr) {
      cin >> x;
    }

    sort(arr, arr + n);

    for (int x : arr) {
      cout << x << ' ';
    }
  }

  return 0;
}