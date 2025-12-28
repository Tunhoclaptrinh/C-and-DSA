#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  cin.ignore();
  cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ✅ bỏ ký tự '\n'

  while (t--) {
    string s;
    getline(cin, s);

    int arr[257];
    memset(arr, 0, sizeof(arr));
    for (int i = 0; i < s.length(); i++) {
      arr[(unsigned char)s[i]]++;
    }

    int maxFreq = 0;
    for (int i = 0; i < 257; i++) {
      if (arr[i] > maxFreq) {
        maxFreq = arr[i];
      }
    }

    for (int i = 0; i < 257; i++) {
      if (arr[i] == maxFreq) {
        cout << (char)i << " " << maxFreq << endl;
      }
    }
  }

  return 0;
}