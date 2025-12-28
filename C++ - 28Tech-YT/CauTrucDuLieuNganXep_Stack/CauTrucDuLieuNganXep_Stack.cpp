#include <bits/stdc++.h>
#include <stack>
using namespace std;

// LIFO => nguyên lý chung (Last In First Out)
// push => đẩy lên đỉnh
// pop => xóa phần tử đỉnh
// top => xem phần tử đỉnh
// size => xem kích cỡ stack có bao nhiêu phần từ
// empty => kiểm tra stack có rỗng không
// => O(1) => độ phức tạp của các phương thức trên

int main() {
  stack<int> st;
  st.push(1);
  st.push(2);
  st.push(3);
  cout << st.top() << endl; // => 3

  st.pop();
  cout << st.top() << endl; // => 2

  cout << st.size() << endl; // => 2

  if (st.empty()) {
    cout << "EMPTY!";
  } else {
    cout << "NOT EMPTY";
  }

  return 0;
}
