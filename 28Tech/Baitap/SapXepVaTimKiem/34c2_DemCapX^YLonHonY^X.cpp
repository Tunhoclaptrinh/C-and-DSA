#include <bits/stdc++.h>
using namespace std;

// cơ sở lý thuyết: x < y => x^y > y^x chỉ trừ một số trường hợp
int countPairs(int x, vector<int> &b, vector<int> &cntY) {
  if (x == 0)
    return 0;
  if (x == 1)
    return cntY[0];

  // y > x
  int idx = upper_bound(b.begin(), b.end(), x) - b.begin();
  int ans = b.size() - idx;

  // y = 0,1 luôn thỏa
  ans += cntY[0] + cntY[1];

  // ngoại lệ
  if (x == 2) {
    ans -= cntY[3] + cntY[4];
  }
  if (x == 3) {
    ans += cntY[2];
  }

  return ans;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for (int &x : a)
      cin >> x;
    for (int &x : b)
      cin >> x;

    vector<int> cntY(5, 0);
    for (int y : b)
      if (y < 5)
        cntY[y]++;

    sort(b.begin(), b.end());

    long long ans = 0;
    for (int x : a) {
      ans += countPairs(x, b, cntY);
    }

    cout << ans << endl;
  }
}
