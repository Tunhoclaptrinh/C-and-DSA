#include <bits/stdc++.h>
using namespace std;

// Vector <kieu_du_lieu> ten_vector;

// .push_back(<phan_tu>) => đẩy 1 phần tử vào cuối mảng
// .back() => gọi đến phần tử có chỉ số cuối cùng
// .size() => kích thước vector

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<int> v;
  v.push_back(10);
  v.push_back(20);
  v.push_back(30);
  cout << v.size() << endl;
  v.push_back(40);
  cout << v.size() << endl;
  cout << "Phan tu dau tien cua vector: " << v.front() << " | " << v[0] << endl;
  cout << "Phan tu cuoi cung cua vector: " << v.back() << " | "
       << v[v.size() - 1] << endl;

  // Duyệt thng qua index
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  cout << endl;

  // Duyệt dùng forEach
  for (int x : v) {
    cout << x << " ";
  }
  cout << endl;

  // Duyệt dùng iterator
  for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
    cout << *it << " ";
  }
  cout << endl;

  // Dùng Auto
  for (int auto it = v.begin(); it != v.end(); it++) {
    cout << *it << " ";
  }

  // Nhập phần tử  vào vector
  int n;
  cin >> n;
  vector<int> vec;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    vec.push_back(x);
  }

  // Khởi tạo vector với n phần tử mặc định
  vector<int> vect(n, 0);

  return 0;
}