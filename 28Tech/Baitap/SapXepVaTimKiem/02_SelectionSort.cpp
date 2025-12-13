#include <bits/stdc++.h>
using namespace std;

int cnt = 0;

void printArray(vector<int> arr) {
  for (int i = 0; i < arr.size(); i++)
    cout << arr[i] << ' ';
}

void selectionSort(vector<int> arr) {
  for (int i = 0; i < arr.size(); i++) {
    int minIdx = i;
    for (int j = i + 1; j < arr.size(); j++) {
      if (arr[minIdx] > arr[j]) {
        minIdx = j;
      }
    }

    if (minIdx != i) {
      swap(arr[i], arr[minIdx]);
      cnt++;
      cout << "Buoc " << cnt << ": ";
      printArray(arr);
      cout << endl;
    }
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    selectionSort(arr);
  }

  return 0;
}