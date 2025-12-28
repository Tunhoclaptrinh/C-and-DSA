#include <bits/stdc++.h>

using namespace std;

void selectionSort(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    // Dùng một biến để lưu chỉ số của phần tử nhở nhất
    int minIdx = i;

    // Duyệt ất cả các phần tử đứng sau phần tử hiện tại và cập nhật chỉ số của
    // phần tử nhỏ nhất
    for (int j = i + 1; j < n; j++) {
      if (arr[minIdx] > arr[j]) {
        minIdx = j;
      }
    }

    if (minIdx != i) {
      swap(arr[i], arr[minIdx]);
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  selectionSort(arr, n);

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}