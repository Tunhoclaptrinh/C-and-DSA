#include <bits/stdc++.h>
using namespace std;

int ok;

void printAB(char arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i];
  }
  cout << endl;
}

void init(char arr[], int n) {
  for (int i = 0; i < n; i++) {
    arr[i] = 'H';
  }
}

void next(char arr[], int n) {
  int i = n - 1;
  while (i >= 0 && arr[i] == 'A') {
    arr[i] = 'H';
    i--;
  }
  if (i == -1) {
    ok = 0;
  } else {
    arr[i] = 'A';
  }
}

bool check(char arr[], int n) {
  if (arr[0] != 'H' || arr[n - 1] != 'A') {
    return false;
  }

  for (int i = 0; i < n - 1; i++) {
    if (arr[i] == 'H' && arr[i + 1] == 'H') {
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
    ok = 1;
    cin >> n;
    char arr[n];
    init(arr, n);
    while (ok) {
      if (check(arr, n)) {
        printAB(arr, n);
      }

      next(arr, n);
    }

    cout << endl;
  }

  return 0;
}