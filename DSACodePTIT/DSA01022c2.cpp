#include <bits/stdc++.h>
using namespace std;

bool check(int arr[], int permum[], int n) {
  for (int i = 0; i < n; i++) {
    if (arr[i] != permum[i]) {
      return false;
    }
  }

  return true;
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
    int permum[n];

    // init
    int stt = 1;
    for (int i = 0; i < n; i++) {
      permum[i] = i + 1;
    }

    if (check(arr, permum, n)) {
      cout << stt << endl;
    } else {
      do {
        stt++;
      } while (next_permutation(permum, permum + n) && !check(arr, permum, n));
      cout << stt << endl;
    }
  }

  return 0;
}