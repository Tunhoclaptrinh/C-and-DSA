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

// === MULTI SET ===
// CÓ các TÍNH CHẤT của Set (phía trên)

// Khác:
//  - Set thì CHỈ cho phép một giá trị DUY NHẤT (unique) tồn tại trong set
//  - MULTISET thì CHO PHÉP "NHIỀU" (multi) giá trị có thể tồn tại trong
//    multiset

// NOTE:
// - Cẩn thận khi dùng erase(x) => nếu trong multi set tồn tại 2 x thì sẽ xóa
//    tất cả
// => nếu muốn chỉ định xóa 1 thì dùng iterator

// UNORDERSET
// Khác:
//  - không sort sẵn => lưu không có thứ tự (như một mảng)
//  - ồ phức tạp tìm kiếm có thể đạt O(1) đến O(n)

int main() {
  unordered_set<int> s;
  for (int i = 0; i < 10; i++) {
    s.insert(i); // INSERT là lên đầu
  }

  for (auto it = s.begin(); it != s.end(); it++) {
    cout << *it << " ";
  }

  return 0;
}