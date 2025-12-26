#include <bits/stdc++.h>
using namespace std;

int N;
string s;

void backtrack(int pos, int count6) {
  if (pos == N) {
    if (s[N - 1] == '6')
      cout << s << "\n";
    return;
  }

  // Thử đặt '6'
  if (count6 < 3) {
    s[pos] = '6';
    backtrack(pos + 1, count6 + 1);
  }

  // Thử đặt '8'
  if (pos == 0 || s[pos - 1] != '8') {
    s[pos] = '8';
    backtrack(pos + 1, 0);
  }
}

int main() {
  cin >> N;
  s.resize(N);

  // Ký tự đầu tiên bắt buộc là 8
  s[0] = '8';
  backtrack(1, 0);

  return 0;
}
