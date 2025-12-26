#include <bits/stdc++.h>
using namespace std;

void printPermum(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i];
  }
  cout << ' ';
}

void init(int arr[], int n) {
  for (int i = n - 1; i >= 0; i--) {
    arr[i] = n - i;
  }
}

int main() {

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int arr[n];
    init(arr, n);
    while (true) {
      printPermum(arr, n);
      if (!prev_permutation(arr, arr + n))
        break;
    }
    cout << endl;
  }
  return 0;
}