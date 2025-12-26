#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

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

    int count = 0;
    for (int i = *se.begin(); i <= *se.rbegin(); i++) {
      if (se.find(i) == se.end()) {
        count++;
      }
    }

    cout << count << endl;
  }

  return 0;
}
