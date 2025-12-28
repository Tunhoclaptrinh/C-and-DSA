#include <bits/stdc++.h>
using namespace std;

// map <key_data_type, value_data_type> variable_name;
// => lư kiểu dictionary (key, value) => key là unique, value là multi
// .insert({key, value})
// .count(key) => count theo key - O(logN)
// .find(keyu) => tìm theo key - O(logN)
// .erase(key) => xóa theo key - O(logN)
// Sắp xếp tăng dần từ bé đến lớn | theo thứ tự từ điển (theo key)

int main() {
  map<int, int> mp;
  mp[100] = 200;
  mp[200] = 300;

  // .insert(x)
  mp.insert({300, 400});
  mp.insert({400, 500});

  // compiler tự suy ra kiểu pair
  for (pair<int, int> p : mp) {
    cout << p.first << " " << p.second << endl;
  }

  // tương tự có thể dùng auto
  for (auto p : mp) {
    cout << p.first << " " << p.second << endl;
  }

  // dùng iterator
  for (map<int, int>::iterator it = mp.begin(); it != mp.end(); it++) {
    // chú ý chỗ truy xuất này nhé !!! ======== !!!
    cout << (*it).first << " " << it->second << endl;
  }

  cout << "Lech the nao duoc ?" << endl;

  if (mp.count(100) != 0) {
    cout << "FOUND !\n";
  } else {
    cout << "NOT FOUND !\n";
  }

  mp.erase(100); // xóa phần tử có key = 100

  if (mp.find(100) != mp.end()) {
    cout << "FOUND !\n";
  } else {
    cout << "NOT FOUND !\n";
  }

  return 0;
}