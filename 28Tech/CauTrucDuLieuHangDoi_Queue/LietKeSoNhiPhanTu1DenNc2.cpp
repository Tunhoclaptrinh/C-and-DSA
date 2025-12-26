#include <bits/stdc++.h>
using namespace std;

string res[10001];
void init() {
  queue<string> q;
  q.push("1");
  int cnt = 1;
  res[1] = "1";
  while (cnt <= 10000) {
    // lấy ra phần tử đầu hàng đợi
    string top = q.front();
    q.pop();

    q.push(top + "0");
    cnt++;
    res[cnt] = q.front();

    q.push(top + "1");
    cnt++;
    res[cnt] = q.front();
  }
}

int main() {
  int t;
  cin >> t;
  init();
  while (t--) {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
      cout << res[i] << ' ';
    }
    cout << endl;
  }

  return 0;
}