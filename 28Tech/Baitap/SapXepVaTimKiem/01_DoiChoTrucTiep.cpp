#include <bits/stdc++.h>

using namespace std;

int cnt = 1;

void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++)
    cout << arr[i] << ' ';
  cout << endl;
}

void selectionSort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    int minIdx = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[minIdx]) {
        minIdx = j;
      }
    }
    if (minIdx != i) {
      swap(arr[i], arr[minIdx]);
    }
    cout << "Buoc " << i + 1 << ": ";
    printArray(arr, n);
    cnt++;
  }
}

// đổi chỗ trực tiếp
void directSort(int arr[], int n) {
  int cnt = 1;
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] > arr[j]) {
        swap(arr[i], arr[j]);
      }
    }
    cout << "Buoc " << cnt++ << ": ";
    printArray(arr, n);
  }
}

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  selectionSort(arr, n);
  // directSort(arr, n);

  return 0;
}