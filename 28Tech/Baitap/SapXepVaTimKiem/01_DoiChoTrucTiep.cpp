#include <bits/stdc++.h>

using namespace std;

int cnt = 1;

void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++)
    cout << arr[i] << ' ';
  cout << endl;
}

void selectionSort(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    int minIdx = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[minIdx]) {
        minIdx = j;
      }
    }
    if (minIdx != i) {
      swap(arr[i], arr[minIdx]);
      cout << "Buoc " << cnt << ":" << endl;
      printArray(arr, n);
      cnt++;
    }
  }
}

// đổi chỗ trực tiếp
void sort(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    int idx = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[idx] > arr[j]) {
        swap(arr[idx], arr[j]);
        cout << "Buoc " << cnt << ":" << endl;
        printArray(arr, n);
        cnt++;
      }
    }
  }
}

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  // selectionSort(arr, n);
  sort(arr, n);

  return 0;
}