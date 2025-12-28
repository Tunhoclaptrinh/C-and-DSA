#include <bits/stdc++.h>
using namespace std;

// map <key_data_type, value_data_type> variable_name;
// => lư kiểu dictionary (key, value) => key là unique, value là multi
// .insert({key, value})
// .count(key) => count theo key - O(logN)
// .find(keyu) => tìm theo key - O(logN)
// .erase(key) => xóa theo key - O(logN)
// Sắp xếp tăng dần từ bé đến lớn | theo thứ tự từ điển (theo key)

// === MULTIMAP ===
// kế thừa map (và có một số tính chất khác)

// Khác:
//  - Set thì CHỈ cho phép một key DUY NHẤT (unique) tồn tại trong map
//  - MULTISET thì CHO PHÉP "NHIỀU" (multi) key có thể tồn tại trong
//    multimap
//  - và không thể sử dụng phép gán mp[x] = y
//    => vì không biết key nào là key nào
//    => dùng iterator hoặc insert({key, value})

// NOTE:
// - Cẩn thận khi dùng erase(x) => nếu trong multi set tồn tại 2 x thì sẽ xóa
//    tất cả
// => nếu muốn chỉ định xóa 1 thì dùng iterator

// UNORDER_MAP
// Khác:
//  - không sort sẵn (theo key) => lưu không có thứ tự (như một mảng)
//  - ồ phức tạp tìm kiếm có thể đạt O(1) đến O(n)

int main() {
  multimap<int, int> mp;

  // KHÔNG THỂ DÙNG
  // mp[100] = 200;
  // mp[200] = 300;

  // .insert(x)
  mp.insert({300, 400});
  mp.insert({400, 500});

  // Tính chất multi key của multimap
  mp.insert({300, 600});

  // => in ra vẫn đầy đủ
  for (pair<int, int> p : mp) {
    cout << p.first << " " << p.second << endl;
  }

  // 300 400
  // 300 600 ==> cho phép trùng key
  // 400 500

  return 0;
}