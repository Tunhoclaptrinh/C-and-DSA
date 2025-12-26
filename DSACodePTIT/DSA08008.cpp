#include <bits/stdc++.h>
using namespace std;

string arr[1001];

void init() {
  queue<string> q;
  q.push("1");
  int cnt = 0;
  arr[0] = "1";
  while (cnt < 1000) {
    string top = q.front();
    q.pop();

    cnt++;
    arr[cnt] = top + "0";
    q.push(top + "0");
    cnt++;
    arr[cnt] = top + "1";
    q.push(top + "1");
  }
}

int main() {
  init();
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    for (int i = 0; i < 1001; i++) {
      int ok = false;
      for (int j = 1; j < 1001; j++) {
        if (j * n == stoll(arr[i])) {
          cout << arr[i] << endl;
          ok = true;
          break;
        }
      }
      if (ok) {
        break;
      }
    }
  }

  return 0;
}