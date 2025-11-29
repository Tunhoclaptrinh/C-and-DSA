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

// ĐỀ BÀI:
// cho mảng có n phần tử và số nguyên k, đối với mỗi dãy con liên tiếp có chiều
// k, In ra được phần tử lớn nhất trong dãy con đó
// 10 3
// 1 2 3 1 4 5 1 8 9 10
// Ouput
// 3 3 4 5 5 8 9 10

int main() {

  // Bài làm:
  int n, k;
  cin >> n >> k;
  int arr[n];
  for (int &x : a) {
    cin >> x;
  }

  multiset<int> ms;
  for (int i = 0; i < k; i++) {
    ms.insert(arr[i]);
  }

  for (int i = k; i < n; i++) {
    cout << *ms.rbegin() << " ";   // hiển thị phẩn tử lớn nhất
    ms.erase(ms.find(arr[i - k])); // Xóa phần tử trước đó
    ms.insert(arr[i]);             // chèn phần tử mới
  }

  return 0;
}