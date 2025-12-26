#include <bits/stdc++.h>
using namespace std;

string arr[10001];

void init() {
  queue<string> q;
  q.push("1");
  arr[0] = "1";

  int cnt = 0;
  while (cnt < 10000) {
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
    for (int i = 0; i < n; i++) {
      cout << arr[i] << ' ';
    }
    cout << endl;
  }

  return 0;
}