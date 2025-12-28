#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n) {
  for (int i = n - 1; i >= 0; i--) {
    for (int j = 0; j < i; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

void bubbleSort2(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
      }
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
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    bubbleSort2(arr, n);

    for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
    }
  }

  return 0;
}