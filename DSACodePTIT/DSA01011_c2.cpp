#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int stt;
    string s;
    cin >> stt >> s;

    if (next_permutation(s.begin(), s.end())) {
      cout << stt << ' ' << s << endl;
    } else {
      cout << stt << ' ' << "BIGGEST" << endl;
    }
  }

  return 0;
}