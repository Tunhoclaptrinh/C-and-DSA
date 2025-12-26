#include <bits/stdc++.h>
using namespace std;

void printAB(char arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i];
  }
  cout << endl;
}

void init(char arr[], int n) {
  for (int i = 0; i < n; i++) {
    arr[i] = 'A';
  }
}

bool next(char arr[], int n) {
  int i = n - 1;
  while (i >= 0 && arr[i] == 'B') {
    arr[i] = 'A';
    i--;
  }

  if (i == -1) {
    return false;
  } else {
    arr[i] = 'B';
    return true;
  }
}

bool check(char arr[], int n, int k) {
  int cnt = 0, res = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] == 'A') {
      cnt++;
    } else {
      cnt = 0;
    }

    if (cnt > k) {
      return false;
    } else if (cnt == k) {
      res++;
    }
  }

  return res == 1;
}

int main() {
  int n, k;
  cin >> n >> k;
  char arr[n];
  init(arr, n);
  int res = 0;

  vector<string> v;

  do {
    if (check(arr, n, k)) {
      res++;
      string tmp = "";
      for (int i = 0; i < n; i++) {
        tmp += arr[i];
      }
      v.push_back(tmp);
    }
  } while (next(arr, n));

  cout << res << endl;
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << endl;
  }

  return 0;
}