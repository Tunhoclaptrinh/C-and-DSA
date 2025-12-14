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

    sort(arr, arr + n, greater<int>());

    int i = 0;
    int j = n - 1;
    while (i < j) {
      cout << arr[i++] << ' ';
      cout << arr[j--] << ' ';
    }

    if (n % 2) {
      cout << arr[i];
    }
  }

  return 0;
}