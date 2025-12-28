#include <bits/stdc++.h>
using namespace std;

// linear search => O(n)
// 10 3
// 1 2 8 9 0 7 6 5 3 4
bool linearSearch(int a[], int n, int x) {
  for (int i = 0; i < n; i++) {
    if (a[i] == x) {
      return true;
    }
  }
  return false;
}

// binary search => O(LogN)
// Các phần tử trong mảng phải được sắp xếp tăng dần hoặc giảm dần
// 10 3
// 1 2 3 4 5 6 7 8 9 10
bool binarySearch(int a[], int l, int r, int k) {
  if (l > r)
    return false;

  int mid = (l + r) / 2;
  if (a[mid] == k) {
    return true;
  } else if (a[mid] > k) {
    return binarySearch(a, l, mid - 1, k);
  } else if (a[mid] < k) {
    return binarySearch(a, mid + 1, r, k);
  }
}

int binarySearchFirst(int a[], int l, int r, int k, int res = -1) {
  if (l > r)
    return res; // trả về kết quả cuối cùng

  int mid = (l + r) / 2;

  if (a[mid] == k) {
    res = mid;                                       // cập nhật vị trí
    return binarySearchFirst(a, l, mid - 1, k, res); // tìm tiếp bên trái
  } else if (a[mid] > k) {
    return binarySearchFirst(a, l, mid - 1, k, res);
  } else {
    return binarySearchFirst(a, mid + 1, r, k, res);
  }
}

// lower_bound(iter1, iter2, key) [iter1, iter2) => trả về vị trí của phần tử
// đầu tiên >= key
// nếu mà tất cả các phần tử trong mảng đều nhỏ hơn key thì => TRẢ VỀ iter2

// upper_bound(iter1, iter2, key) [iter1, iter2) => trả về vị trí của phần tử
// đầu tiên > key
// nếu mà tất cả các phần tử trong mảng đều nhỏ hơn hoặc bằng key thì => TRẢ VỀ
// iter2

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k;
  cin >> n >> k;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  if (linearSearch(a, n, k)) {
    cout << "true" << endl;
  } else {
    cout << "false" << endl;
  }

  if (binarySearch(a, 0, n - 1, k)) {
    cout << "true" << endl;
  } else {
    cout << "false" << endl;
  }

  int res = 0;
  cout << binarySearchFirst(a, 0, n - 1, k, res) << endl;

  auto it = lower_bound(a, a + n, k);
  cout << *it << endl;
  // nếu mốn ấy chỉ số:
  cout << it - a << endl;

  return 0;
}