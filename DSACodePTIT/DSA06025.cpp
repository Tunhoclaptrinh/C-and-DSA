#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n) {
  cout << "Buoc " << 0 << ": ";
  cout << arr[0] << endl;

  for (int i = 1; i < n; i++) {

    int key = arr[i];
    int pos = i - 1;
    while (pos >= 0 && arr[pos] > key) {
      // arr[i] = arr[pos];
      // or
      arr[pos + 1] = arr[pos];
      pos--;
    }
    // arr[i] = key;
    arr[pos + 1] = key;
    cout << "Buoc " << i << ": ";
    for (int j = 0; j <= i; j++) {
      cout << arr[j] << ' ';
    }
    cout << endl;
  }
}

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  insertionSort(arr, n);

  return 0;
}