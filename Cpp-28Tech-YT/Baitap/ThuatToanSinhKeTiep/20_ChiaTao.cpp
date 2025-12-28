#include <bits/stdc++.h>
using namespace std;

void init(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    arr[i] = 0;
  }
}

bool next(int arr[], int n) {
  int i = n - 1;
  while (i >= 0 && arr[i] == 1) {
    arr[i] = 0;
    i--;
  }
  if (i == -1) {
    return false;
  } else {
    arr[i] = 1;
    return true;
  }
}

int sum(int arr[], int apple[], int n) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i]) {
      sum += apple[i];
    }
  }

  return sum;
}

int main() {
  int n;
  cin >> n;
  int apple[n];
  int arr[n];
  int distance = INT_MAX;
  int sumtmp = 0;
  for (int i = 0; i < n; i++) {
    cin >> apple[i];
    sumtmp += apple[i];
  }

  init(arr, n);
  do {
    int s = sum(arr, apple, n);
    distance = min(distance, abs(sumtmp - 2 * s)); // 🔥 chỉ sửa chỗ này
  } while (next(arr, n));

  cout << distance << endl;

  return 0;
}