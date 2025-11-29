#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  cin.ignore();
  // cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ✅ bỏ ký tự '\n'

  map<string, int> mp;
  string arr[n];
  for (int i = 0; i < n; i++) {
    string s;
    getline(cin, s);
    stringstream ss(s);

    mp[s]++;

    for (string word; ss >> word;) {
      arr[i] += word;
    }
    arr[i] += to_string(mp[s]);
  }

  for (int i = 0; i < n; i++) {
    cout << arr[i] << endl;
  }

  return 0;
}