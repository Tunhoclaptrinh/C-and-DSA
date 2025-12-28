#include <bits/stdc++.h>
using namespace std;

void next(int arr[], int n, int k) {
  int i = k - 1;
  while (i >= 0 && arr[i] == n - k + i + 1) {
    i--;
  }
  if (i != -1) {
    arr[i]++;
    for (int j = i + 1; j < k; j++) {
      arr[j] = arr[j - 1] + 1;
    }
  } else {
    for (int j = 0; j < k; j++) {
      arr[j] = j + 1;
    }
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    int arr[k];
    for (int i = 0; i < k; i++) {
      cin >> arr[i];
    }

    next(arr, n, k);
    for (int i = 0; i < k; i++) {
      cout << arr[i] << ' ';
    }
    cout << endl;
  }

  return 0;
}