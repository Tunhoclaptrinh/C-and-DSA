#include <bits/stdc++.h>
using namespace std;

// O(logN) => độ phức tạp cho tất cả các phương thức của set
// .insert(x) => chèn phần tử x vào set
// .size() => trả về độ dài (số phần tử) của set
// .find() => tìm xem phần tử có tồn tại trong set
//         => trả về iterator trỏ đến phần tử trong set
//         => trả về iterator tại end nếu KHÔNG tìm thấy phần tử trong set
// .count() => trả về số phần tử trong set
// .erase(x) || e.erase(s.find(x)) => xóa phần tử x trong set khỏi set
//                                 || => xóa theo iterator của x trong set
// .begin() || .rend() => trả về iterator của phần tử đầu || cuối của set

// NOTE: các phần tử trong set có tính thứ tự
//        - số thì từ bé đến lớn
//        - string thì thứ tự chữ cái

int main() {
  set<int> s;
  s.insert(100);
  s.insert(200);
  s.insert(300);
  cout << s.size() << endl; // 3

  s.insert(100);            // đã tồn tại nên không insert nữa
  cout << s.size() << endl; // vẫn là 3

  cout << s.count(100) << endl; // 1

  if (s.find(100) != s.end()) {
    cout << "YES" << " " << *s.find(100) << endl;
  }

  for (int x : s) {
    cout << x << " ";
  }
  cout << endl;

  s.erase(100); // xóa 100 ra khỏi set

  s.erase(s.find(100)); // xóa iterator trỏ tới phần tử x trong set
  for (int x : s) {
    cout << x << " ";
  }

  // trỏ tới phần tử đầu tiên của set
  cout << *s.begin() << endl;

  // trỏ tới phần tử đầu tiên của set
  cout << *s.end() << endl;

  for (auto x : s) { // có thể dùng auto cho bất kể kiểu dữ liệu nào
    cout << x << " ";
  }

  return 0;
}