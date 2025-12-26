#include <bits/stdc++.h>
using namespace std;

int ok;

void init(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    arr[i] = i + 1;
  }
}

void next(int arr[], int n) {
  int i = n - 2;
  while (i >= 0 && arr[i] > arr[i + 1]) {
    i--;
  }

  if (i == -1) {
    ok = 0;
  } else {
    int j = n - 1;
    while (j >= 0 && arr[i] > arr[j]) {
      j--;
    }
    swap(arr[i], arr[j]);
    reverse(arr + i + 1, arr + n);
  }
}

int main() {

  int t;
  cin >> t;
  while (t--) {
    int n;
    ok = 1;
    cin >> n;
    int arr[n];
    init(arr, n);
    vector<string> v;

    while (ok) {
      string tmp = "";
      for (int i = 0; i < n; i++) {
        tmp += to_string(arr[i]);
      }

      v.push_back(tmp);

      next(arr, n);
    }

    for (int i = v.size() - 1; i >= 0; i--) {
      cout << v[i] << ' ';
    }

    cout << endl;
  }
  return 0;
}