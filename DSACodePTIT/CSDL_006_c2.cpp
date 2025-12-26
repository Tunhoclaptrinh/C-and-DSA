#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  int arr[n];
  map<int, bool> mp; // dùng cái này để đánh dấu đã được in ra hay chưa

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  for (int i = 0; i < n; i++) {
    if (!mp[arr[i]]) { // nếu chưa được in thì mới in ra
      cout << arr[i] << ' ';
      mp[arr[i]] = true; // đánh dấu đã in ra
    }
  }

  return 0;
}