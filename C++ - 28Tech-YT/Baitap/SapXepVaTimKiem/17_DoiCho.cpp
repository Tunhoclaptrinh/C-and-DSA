#include <bits/stdc++.h>
using namespace std;

void printArr(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i];
  }
}

void selectionSort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    int minIdx = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[i] > arr[j]) {
        minIdx = j;
      }
    }

    if (minIdx != i) {
      swap(arr[minIdx], arr[i]);
      cout << arr[i] << ' ' << arr[minIdx] << endl;
    }
  }
}

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int &x : arr)
    cin >> x;

  selectionSort(arr, n);

  return 0;
}