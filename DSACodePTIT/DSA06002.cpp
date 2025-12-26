#include <bits/stdc++.h>
using namespace std;
int X;

bool cmp(int x, int y) { return abs(X - x) < abs(X - y); }

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n >> X;
    int arr[n];

    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    stable_sort(arr, arr + n, cmp);

    for (int i = 0; i < n; i++) {
      cout << arr[i] << ' ';
    }

    cout << endl;
  }
}