#include <bits/stdc++.h>
using namespace std;

void solve(vector<string> &res, int n) {
  queue<string> q;
  int i = 0;
  q.push("1");
  res.push_back(q.front());
  while (i < n) {
    string top = q.front();
    q.pop();

    q.push(top + "0");
    res.push_back(top + "0");
    q.push(top + "1");
    res.push_back(top + "1");
    i++; // thực ra đều chạy quá n số đầu tuy nhiên vậy là đủ
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<string> res;

    solve(res, n);

    for (int i = 0; i < n; i++) {
      cout << res[i] << ' ';
    }
    cout << endl;
  }

  return 0;
}