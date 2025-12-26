#include <bits/stdc++.h>
using namespace std;

int solve(string N) {
  queue<string> q;
  q.push("1");
  int cnt = 0;
  while (!q.empty()) {
    string cur = q.front();
    q.pop();
    if (cur.size() < N.size() || cur.size() == N.size() && cur <= N) {
      cnt++;

      q.push(cur + "0");
      q.push(cur + "1");
    }
  }

  return cnt;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    string n;
    cin >> n;

    cout << solve(n) << endl;
  }

  return 0;
}