#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int &x : arr)
      cin >> x;

    sort(arr.begin(), arr.end());

    int l = 0, r = n - 1;
    int res = arr[l] + arr[r];

    while (l < r) {
      int sum = arr[l] + arr[r];
      if (abs(sum) < abs(res)) {
        res = sum;
      }

      if (sum < 0)
        l++;
      else
        r--;
    }

    cout << res << endl;
  }
  return 0;
}
