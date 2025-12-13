#include <bits/stdc++.h>

using namespace std;

int linearSearch(int arr[], int n, int key) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == key) {
      return 1;
    }
  }

  return 0;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, key;
    cin >> n >> key;
    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    if (linearSearch(arr, n, key)) {
      cout << 1 << endl;
    } else {
      cout << 0 << endl;
    }
  }

  return 0;
}