#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int arr[n];
    set<int> se;
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      se.insert(arr[i]);
    }

    if (se.size() >= 2) {
      cout << *se.begin() << ' ' << *(++se.begin()) << endl;
    } else {
      cout << -1 << endl;
    }
  }
  return 0;
}