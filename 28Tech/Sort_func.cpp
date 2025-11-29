#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

// sort
// stable_sort: bubble, insertion, merge sort

// sort(a, a + n), sort(a + x, a+ y) => a[x; y-1]
// sort(a.begin(), a.end()), sort(a.begin() + x, a.begin() + y) => a[x; y-1]
// nếu muốn sort ngược => greater<int || ... >() => tham số thứ 3

//  stable_sort => các tham số tương tự, khác mỗi cái tên
//  Sắp xếp các phần tử trong mảng theo thứ tự tăng dần về giá trị tuyệt đối
//  8
//  1 -1 2 1 5 -2 -5
//  output: 1 -1 1 2 -2 5 -5 // vẫn giữ lại vị trí ban đầu tương đối của bọn nó

// cài đặt tùy chỉnh tham số th 3
bool cmp(int a, int b) {
  if (a > b) // nếu như muốn a đứng trước b thì return true => ở dây sẽ sắp xếp
             // từ lớn đển bé
    return true;
  else
    return false;
}

bool cmp2(int a, int b) { return abs(a) < abs(b); } // giống stable_sort

// sắp xếp các từ theo thứ tự chiều dài giảm
// 5
// python java C++ golang C
// output: python golang java C++ C

bool cmp3(string a, string b) { return a.length() > b.length(); }

// thêm điều kiện
bool cmp4(string a, string b) {
  if (a.length() != b.length())
    return a.length() > b.length();
  return a < b; // tiêu chí | điều kiện thứ 2
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  int a[1000];
  for (int i = 0; i < 1000; i++) {
    cin >> a[i];
  }

  sort(a, a + n); // a[x] => a[y] thì sort(a+x, a + y + 1)

  for (int i = 0; i < n; i++) {
    cout << a[i] << endl;
  }

  // Với vector
  vector<int> arr2;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    arr2.push_back(x);
  }

  sort(arr2.begin(), arr2.end()); // Dùng iterator
  for (int i = 0; i < n; i++) {
    cout << arr2[i] << endl;
  }

  // sắp xếp pair
  int m;
  cin >> m;

  pair<int, int> arr3[m];
  for (int i = 0; i < m; i++) {
    cin >> arr3[i].first >> arr3[i].second;
  }

  sort(arr3, arr3 + m); // mặc định sẽ sort theo first tăng dần

  for (int i = 0; i < m; i++) {
    cout << arr3[i].first << " " << arr3[i].second << endl;
  }

  // =========== Stable Sort ==============
  //  stable_sort => các tham số tương tự, khác mỗi cái tên
  //  Sắp xếp các phần tử trong mảng theo thứ tự tăng dần về giá trị tuyệt đối
  //  8
  //  1 -1 2 1 5 -2 -5
  //  output:
  //  1 -1 1 2 -2 5 -5 // vẫn giữ lại vị trí ban đầu tương đối của bọn nó

  int k;
  cin >> k;
  int arr4[k];
  for (int i = 0; i < k; i++) {
    cin >> arr4[i];
  }

  stable_sort(arr4, arr4 + k);
  for (int i = 0; i < k; i++) {
    cout << arr4[i] << endl;
  }

  // =========================
  // cài đặt tùy chỉnh tham số th 3
  int h;
  cin >> h;
  int arr5[h];
  for (int i = 0; i < h; i++) {
    cin >> arr5[i];
  }

  sort(arr5, arr5 + h);
  for (int i = 0; i < h; i++) {
    cout << arr5[i] << endl;
  }

  // sắp xếp các từ theo thứ tự chiều dài giảm
  // 5
  // python java C++ golang C
  // output: python golang java C++ C

  int o;
  cin >> o;
  int arr6[o];
  for (int i = 0; i < o; i++) {
    cin >> arr6[i];
  }

  sort(arr6, arr6 + o, cmp3);

  for (int i = 0; i < o; i++) {
    cout << arr6[i] << endl;
  }

  return 0;
}