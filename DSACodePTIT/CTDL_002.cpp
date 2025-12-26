#include <bits/stdc++.h>
using namespace std;

int n, K;
int a[100];
vector<int> cur;
int cnt = 0;

void backtrack(int i, int sum) {
  if (sum == K) {
    for (int x : cur)
      cout << x << ' ';
    cout << endl;
    cnt++;
    return;
  }

  if (i == n || sum > K)
    return;
  // chọn a[i]
  cur.push_back(a[i]);
  backtrack(i + 1, sum + a[i]);
  // Quay lui (bỏ a[i] ra)
  cur.pop_back();

  // bỏ qua a[i]
  backtrack(i + 1, sum);
}

int main() {
  cin >> n >> K;
  for (int i = 0; i < n; i++)
    cin >> a[i];

  backtrack(0, 0);
  cout << cnt;
  return 0;
}