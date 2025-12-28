#include <bits/stdc++.h>

using namespace std;

bool cmp(int x, int y) { return abs(x) < abs(y); }

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int arr[n];
    for (int &x : arr) {
      cin >> x;
    }

    stable_sort(arr, arr + n, cmp);

    for (int x : arr)
      cout << x << ' ';
    cout << endl;
  }

  return 0;
}