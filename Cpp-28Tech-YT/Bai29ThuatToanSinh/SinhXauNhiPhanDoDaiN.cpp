#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, arr[100], ok;

// khởi tạo
void init() {
  for (int i = 1; i <= n; i++) {
    arr[i] = 0;
  }
}

void next() {
  // Bắt đầu từ bit cuối cùng, và đi tìm it 0 đầu tiên
  int i = n;
  while (i >= 1 && arr[i] == 1) {
    arr[i] = 0;
    i--;
  }

  if (i == 0) {
    ok = 0; // đây chính là cấu hình cuối cùng
  } else {
    arr[i] = 1;
  }
}

int main() {
  cin >> n;
  ok = 1;
  init();

  while (ok) {
    for (int i = 1; i <= n; i++) {
      cout << arr[i];
    }
    cout << endl;
    next();
  }

  return 0;
}