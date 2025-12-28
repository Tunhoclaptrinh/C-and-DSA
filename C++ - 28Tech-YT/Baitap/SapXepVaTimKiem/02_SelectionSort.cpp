#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> arr) {
  for (int i = 0; i < arr.size(); i++)
    cout << arr[i] << ' ';

  cout << endl;
}

void selectionSort(vector<int> arr) {
  for (int i = 0; i < arr.size() - 1; i++) {
    int minIdx = i;
    for (int j = i + 1; j < arr.size(); j++) {
      if (arr[minIdx] > arr[j]) {
        minIdx = j;
      }
    }

    if (minIdx != i) {
      swap(arr[i], arr[minIdx]);
    }
    cout << "Buoc " << i + 1 << ": ";
    printArray(arr);
  }
}

int main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  selectionSort(arr);

  return 0;
}