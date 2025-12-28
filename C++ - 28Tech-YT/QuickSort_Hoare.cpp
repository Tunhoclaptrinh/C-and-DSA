#include <bits/stdc++.h>
using namespace std;

int partitionHoare(int arr[], int low, int high) {
  int pivot = arr[(low + high) / 2]; // Hoare thường dùng mid
  int i = low - 1;
  int j = high + 1;

  while (true) {
    do {
      i++;
    } while (arr[i] < pivot);
    do {
      j--;
    } while (arr[j] > pivot);

    if (i >= j)
      return j;

    swap(arr[i], arr[j]);
  }
}

void quickSort(int arr[], int low, int high) {
  if (low < high) {
    int p = partitionHoare(arr, low, high);
    quickSort(arr, low, p);
    quickSort(arr, p + 1, high);
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  quickSort(arr.data(), 0, n - 1);

  for (int x : arr)
    cout << x << " ";
}
