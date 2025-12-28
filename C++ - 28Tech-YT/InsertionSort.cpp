#include <bits/stdc++.h>
using namespace std;

void insertionSort(int a[], int n) {
  for (int i = 1; i < n; i++) {
    int key = a[i];
    int pos = i - 1;
    while (pos >= 0 && a[pos] > key) {
      a[pos + 1] = a[pos];
      pos--;
    }
    a[pos + 1] = key;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  insertionSort(a, n);
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }

  return 0;
}

// 10
// 9 8 1 7 6 2 3 5 4 10