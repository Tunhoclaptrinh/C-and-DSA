#include <bits/stdc++.h>
using namespace std;

string arr[501];

void init() {
  queue<string> q;
  int cnt = 0;
  arr[0] = "0";
  q.push("0");
  while (cnt < 500) {
    string top = q.front();
    q.pop();

    cnt++;
    arr[cnt] = top + '0';
    q.push(arr[cnt]);

    cnt++;
    arr[cnt] = top + '9';
    q.push(arr[cnt]);
  }
}

int main() {
  int t;
  cin >> t;
  init();
  while (t--) {
    int n;
    cin >> n;

    for (int i = 0; i < 500; i++) {
      if (stoll(arr[i]) != 0 && stoll(arr[i]) % n == 0) {
        cout << stoll(arr[i]) << endl;
        break;
      }
    }
  }

  return 0;
}