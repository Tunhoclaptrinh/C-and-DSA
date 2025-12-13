#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// #Algorithm function in STL;
// -min
// -max
// -min_element
// -max_element
// -accumulate
// -swap
// -sort
// -stable_sort
// -find
// -binary_search
// -lower_bound
// -upper_bound
// -fill
// -memset
// -merge
// -reverse
// -set_union
// -set_intersection
// -set_difference
// -set_symmetric_difference

bool cmp(int a, int b) { return abs(a) < abs(b); }

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int a = 10;
  int b = 20;
  int arr[5] = {1, 2, 1, 4, 8};
  vector<int> arr2 = {1, 2, 1, 4, 8};

  // =================== MIN, MAX, MIN_ELEMENT, MAX_ELEMENT ==============
  cout << min(a, b) << endl;               // => 10
  cout << min({1, 2, 1, 3, 4, 5}) << endl; // => 1
  cout << max(a, b) << endl;               // => 20
  cout << max({1, 2, 1, 3, 4, 5}) << endl; // => 5

  cout << min_element(arr, arr + 5)
       << endl; // => trả về vị trí ô nhớ => con trỏ (iterator) đến phần tử nhỏ
                // nhất
  cout << *min_element(arr, arr + 5) << endl; // => 1

  cout << *min_element(arr2.begin(), arr2.end()) << endl;
  cout << *max_element(begin(arr2), end(arr2)) << endl;

  // ======================= accumulate =================
  int sum = accumulate(arr, arr + 5, 0);
  cout << sum
       << endl; // => 16 (tổng của dãy từ 0 đến 5 => truyền it(con trỏ) vào

  int sum2 = accumulate(arr2.begin(), arr2.end(), 0);
  cout << sum2 << endl; // => tương tự như trên

  // ======================= swap =================
  int x = 100, y = 200;

  swap(x, y);
  cout << x << ' ' << y << endl; // => 200 100 (đã đổi chỗ cho nhau)

  // ======================= sort, stable_sort =================

  int arr3[5] = {1, 4, 3, 2, 5};
  vector<int> arr4 = {1, 4, 3, 2, 5};
  sort(arr3, arr3 + 5);
  for (int x : arr3)
    cout << x << ' ';
  cout << endl;

  sort(arr4.begin(), arr4.end());
  for (int x : arr4)
    cout << x << ' ';
  cout << endl;

  // sắp xếp theo thứ tự giảm dần => truyền thêm greater
  sort(arr4.begin(), arr4.end(), greater<int>());
  for (int x : arr4)
    cout << x << ' ';
  cout << endl;

  string str[5] = {"28tech ", " python", "AI", "Data", "C++"};
  sort(str, str + 5);
  for (string x : str)
    cout << x << ' '; //  python 28tech  AI C++ Data
  cout << endl;

  // => tìm hiểu thêm về việc xây dựng comparator trong sort

  // tìm kiếm ổn định stable_sort
  // => giữ nguyên giá trị tương đối giữa các phần tử cùng giá trị

  int arr5[6] = {-1, 3, 1, -1, -2, -3};

  stable_sort(begin(arr5), end(arr5), cmp);
  for (int x : arr5)
    cout << x << ' '; // -1 1 -1 -2 3 -3
  cout << endl;

  // ============== find, binary_search, lower_bound, upper_bound ============
  int arr6[5] = {-1, 2, 1, 3, 5};

  auto it = find(begin(arr6), end(arr6), 5);
  if (it == end(arr6))
    cout << "NOT FOUND" << endl;
  else
    cout << "FOUND" << endl;

  if (binary_search(begin(arr6), end(arr6), 5))
    cout << "FOUND" << endl;
  else
    cout << "NOT FOUND" << endl;

  int arr7[6] = {1, 1, 2, 2, 3, 4};

  auto it1 = lower_bound(begin(arr7), end(arr7), 2);
  cout << *it1 << endl; // 2 => phần tử đầu tiên lớn hơn hoặc bằng ( >= ) value

  // muốn biết vị trí phần tử
  cout << (it1 - arr7) << endl;

  auto it2 = upper_bound(begin(arr7), end(arr7), 2);
  cout << *it2 << endl; // 3 => phần tử đầu tiên lớn hơn ( > ) value

  // ============== memset, fill, merge  ============
  int arr8[5] = {1, 2, 3, 4, 5};
  // gán được 0 và -1
  memset(arr8, 0, sizeof(arr8));

  for (int x : arr8)
    cout << x << ' ';
  cout << endl;

  // => không sử dụng memset với vector

  vector<int> arr9 = {1, 2, 3, 4, 5, 6, 7};
  // gán cho vector có giá trị toàn bô các phần tử là 100
  fill(begin(arr9), end(arr9), 100);
  for (int x : arr9)
    cout << x << ' ';
  cout << endl;

  fill(arr8, arr8 + sizeof(arr8), 1);
  for (int x : arr8)
    cout << x << ' ';
  cout << endl;

  vector<int> arr10 = {1, 2, 3, 4, 5, 6, 7, 8};
  vector<int> arr11 = {1, 1, 2, 5, 10, 15};
  vector<int> arr12(14);

  // thứ tự các tham đối số
  // vị trí bắt đầu mảng a, vị trí kết thúc mảng a, vị trí bắt đầu mảng b, vị
  // trí kết thúc mảng b, vị trí bắt đầu mảng c
  merge(arr10.begin(), arr10.end(), arr11.begin(), arr11.end(),
        arr12.begin()); // => tăng dần

  for (int x : arr12)
    cout << x << ' ';
  cout << endl;

  reverse(arr12.begin(), arr12.end()); // lật ngược mảng
  for (int x : arr12)
    cout << x << ' ';
  cout << endl;

  // ======= set_union, set_intersection, set_difference,
  // set_symmetric_difference  ======

  // hợp, giao, trừ (khác), trừ giao

  // phải sort trước khi set_
  int arr13[] = {1, 2, 3, 4, 5};
  int arr14[] = {1, 3, 4, 5, 6, 7};

  vector<int> arr15(11);

  auto it3 = set_union(arr13, arr13 + 5, arr14, arr14 + 6, arr15.begin());

  arr15.resize(it3 - arr15.begin());

  return 0;
}