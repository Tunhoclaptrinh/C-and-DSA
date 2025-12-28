#include <bits/stdc++.h>
using namespace std;

string arr[1000001];

void init() {
  queue<string> q;
  int cnt = 0;
  q.push("");
  while (cnt < 1000000) {
    string top = q.front();
    q.pop();

    cnt++;
    arr[cnt] = top + "6";
    q.push(arr[cnt]);
    cnt++;
    arr[cnt] = top + "8";
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

    for (int i = 1000000; i >= 0; i--) {
      if (arr[i].size() <= n)
        cout << arr[i] << " ";
    }

    cout << endl;
  }

  return 0;
}