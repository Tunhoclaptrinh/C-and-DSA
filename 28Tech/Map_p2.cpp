#include <bits/stdc++.h>
using namespace std;

// map <key_data_type, value_data_type> variable_name;
// => lư kiểu dictionary (key, value) => key là unique, value là multi
// .insert({key, value})
// .count(key) => count theo key - O(logN)
// .find(keyu) => tìm theo key - O(logN)
// .erase(key) => xóa theo key - O(logN)

// ứng dụng: đếm số lần xuất hiện của các phần tử trong mảng
// ĐỀ BÀI:
// đếm số lần xuất hiện của các phần tử trong mảng, sau đó in ra kèm theo tần
// suất của nó
// input:
// 8
// 1 1 2 1 3 5 1 -4
// output:
// 1 4
// 2 1
// 3 1
// -4 1
// 5 1

int main() {
  int n;
  cin >> n;
  // int arr[n];
  map<int, int> mp;

  // for (int i = 0; i < n; i++) {
  //   cin >> arr[i];
  // }
  //
  // for (int i = 0; i < n; i++) {
  //   mp[arr[i]]++;
  // }
  //
  // for (auto it = mp.begin(); it != mp.end(); it++) {
  //   cout << it->first << " " << it->second << endl;
  // }

  // Cách ngắn hơn
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    mp[x]++;
  }

  int max_freq = 0;
  int res;
  for (pair<int, int> p : mp) {
    cout << p.first << " " << p.second << endl;
    if (p.second > max_freq) { // nếu cần tần suất của số | từ có thứ tự lớn hơn
                               // thì thêm dẫu bằng, ex: p.second >= max_freq
      res = p.first;
      max_freq = p.second;
    }
  }

  cout << max_freq << endl;
  cout << res << endl;

  return 0;
}