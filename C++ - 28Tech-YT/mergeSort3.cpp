#include <bits/stdc++.h>

using namespace std;

// Trộn 2 dãy con: [l,m] và [m+1,r]
void merge(int arr[], int l, int m, int r) {
  // Bước 1: Sao chép ra 2 mảng => chuẩn bị merge
  vector<int> L(arr + l, arr + m + 1);
  vector<int> R(arr + m + 1, arr + r + 1);

  int i = 0, j = 0, k = l;
  // Bưc 2: Merge 2 mảng con lại với nhau
  while (i < L.size() && j < R.size()) {
    // so sánh 2 phần tử tương ứng sẽ merge
    if (L[i] <= R[j]) {
      arr[k] = L[i];
      i++;
      k++;
    } else {
      arr[k] = R[j];
      k++;
      j++;
    }
  }

  // Bước 3: merge nốt các thành phần còn lại khi một trong 2 mảng hết
  while (i < L.size()) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < R.size()) {
    arr[k] = R[j];
    j++;
    k++;
  }
}

void mergesort(int arr[], int l, int r) {
  if (l >= r) { // điều kiện dừng
    return;
  }
  // lấy vị trí ở giữa mảng => chia để trị
  int mid = (l + r) / 2;

  // gọi lại bên trái
  mergesort(arr, l, mid);

  // gọi lại bên phải
  mergesort(arr, mid + 1, r);

  // hợp nhất mảng con
  merge(arr, l, mid, r); // [l,m] và [m+1,r]
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    mergesort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
    }
  }

  return 0;
}