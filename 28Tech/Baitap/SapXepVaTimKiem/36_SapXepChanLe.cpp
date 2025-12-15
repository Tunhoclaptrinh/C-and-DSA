#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int arr[n];
    vector<int> even, odd;
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      if (arr[i] % 2 != 0) {
        odd.push_back(arr[i]);
      } else {
        even.push_back(arr[i]);
      }
    }

    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end(), greater<int>());

    int i = 0, j = 0;
    for (int k = 0; k < n; k++) {
      if (arr[k] % 2 != 0) {
        cout << odd[i++] << ' ';
      } else {
        cout << even[j++] << ' ';
      }
    }

    cout << endl;
  }

  return 0;
}