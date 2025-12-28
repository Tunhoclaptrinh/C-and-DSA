#include <bits/stdc++.h>
#include <queue>
using namespace std;

// FIFO => First In First Out
// O(1)
// push => đẩy vào cuối hàng đợi
// pop => xóa ở đầu hàng đợi
// empty => kiểm tra rỗng
// size => số phần tử
// front => đầu hàng đợi
// back => cuối hàng đợi

int main() {
  queue<int> q;
  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);

  cout << q.front() << endl; // => 1
  q.pop();                   // xóa ở đầu hàng
  cout << q.front() << endl; // => 2
  cout << q.size() << endl;  // => 3 => hiện tại có 3 phần từ
  cout << q.back() << endl;  // => 4
  q.pop();
  q.pop();
  q.pop();
  if (q.empty()) {
    cout << "Empty" << endl;
  } else {
    cout << "Not empty" << endl;
  }

  return 0;
}