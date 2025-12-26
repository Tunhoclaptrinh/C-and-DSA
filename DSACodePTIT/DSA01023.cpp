#include <bits/stdc++.h>
using namespace std;

void init(int arr[], int k) {
  for (int i = 0; i < k; i++) {
    arr[i] = i + 1;
  }
}

bool next(int arr[], int n, int k) {
  int i = k - 1;
  while (i >= 0 && arr[i] == n - k + i + 1) {
    i--;
  }

  if (i == -1) {
    return false;
  } else {
    arr[i]++;
    for (int j = i + 1; j < k; j++) {
      arr[j] = arr[j - 1] + 1;
    }

    return true;
  }
}

bool check(int arr[], int com[], int k) {
  for (int i = 0; i < k; i++) {
    if (arr[i] != com[i]) {
      return false;
    }
  }
  return true;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    int arr[k];
    int com[k];

    init(com, k);

    for (int i = 0; i < k; i++) {
      cin >> arr[i];
    }

    if (check(arr, com, k)) {
      cout << 1 << endl;
    } else {
      int cnt = 1;
      do {
        cnt++;
      } while (next(com, n, k) && !check(arr, com, k));
      cout << cnt << endl;
    }
  }

  return 0;
}