#include <bits/stdc++.h>
using namespace std;

int n, a[101], cnt = 0, K;
vector<int> cur;

void printArr() {
  for (int x : cur) {
    cout << x << ' ';
  }
  cnt++;
  cout << endl;
}

void backtrack(int i, int sum) {
  if (sum == K) {
    printArr();

    return;
  }
  if (i == n || sum > K) {
    return;
  }

  cur.push_back(a[i]);
  backtrack(i + 1, sum + a[i]);
  cur.pop_back();

  backtrack(i + 1, sum);
}

int main() {
  cin >> n >> K;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  backtrack(0, 0);

  cout << cnt << endl;

  return 0;
}