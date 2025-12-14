#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    int x = arr[i];
    int pos = i - 1;
    while (pos >= 0 && arr[pos] > x) {
      swap(arr[pos], arr[pos + 1]);
      pos--;
    }

    arr[pos + 1] = x;
    cout << x << ' ' << pos + 1 << endl;
  }
}

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int &x : arr) {
    cin >> x;
  }

  insertionSort(arr, n);

  // for (int &x : arr) {
  //   cout << x << ' ';
  // }

  return 0;
}