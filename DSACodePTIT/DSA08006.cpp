#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    queue<string> q;
    q.push("0");
    q.push("9");
    while (true) {
      string top = q.front();
      q.pop();

      if (stoll(top + "0") != 0 && stoll(top + "0") % n == 0) {
        cout << stoll(top + "0") << endl;
        break;
      } else if (stoll(top + "9") != 0 && stoll(top + "9") % n == 0) {
        cout << stoll(top + "9") << endl;
        break;
      }
      q.push(top + "0");
      q.push(top + "9");
    }
  }
  return 0;
}