#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    int key = arr[i];
    int pos = i - 1;
    while (pos >= 0 && arr[pos] > key) {
      arr[pos + 1] = arr[pos];
      pos--;
    }
    arr[pos + 1] = key;

    cout << "Buoc " << i << ": ";

    for (int j = 0; j <= i; j++)
      cout << arr[j] << ' ';
    cout << endl;
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    insertionSort(arr, n);
  }

  return 0;
}