#include <bits/stdc++.h>
using namespace std;

string arr[1000001];

void init() {
  queue<string> q;
  int cnt = 0;

  arr[cnt++] = "6";
  arr[cnt++] = "8";
  q.push("6");
  q.push("8");

  while (cnt < 1000000) {
    string top = q.front();
    q.pop();

    arr[cnt] = top + "6";
    q.push(arr[cnt]);
    cnt++;
    if (cnt >= 1000000)
      break;

    arr[cnt] = top + "8";
    q.push(arr[cnt]);
    cnt++;
  }
}

int main() {
  int t;
  cin >> t;
  init();

  while (t--) {
    int n;
    cin >> n;

    for (int i = 999999; i >= 0; i--) {
      if ((int)arr[i].size() <= n)
        cout << arr[i] << " ";
    }

    cout << endl;
  }

  return 0;
}
