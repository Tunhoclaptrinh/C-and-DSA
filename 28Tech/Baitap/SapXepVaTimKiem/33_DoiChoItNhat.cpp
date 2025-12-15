#include <bits/stdc++.h>

using namespace std;

void selectionSort(int arr[], int n, int &cnt) {
  for (int i = 0; i < n - 1; i++) {
    int minIdx = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[minIdx] > arr[j]) {
        minIdx = j;
      }
    }
    if (minIdx != i) {
      cnt++;
      swap(arr[i], arr[minIdx]);
    }
  }
}

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

    int cnt = 0;
    selectionSort(arr, n, cnt);

    // for (int i = 0; i < n; i++) {
    //   cout << arr[i] << ' ';
    // }

    cout << cnt;

    cout << endl;
  }

  return 0;
}