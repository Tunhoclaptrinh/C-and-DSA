#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[], int l, int r, int key) {
    if (l > r) return false;
    int mid = (l + r) / 2;
    if (arr[mid] == key) {
        return true;
    } else if (arr[mid] > key) {
        return binarySearch(arr, l, mid - 1, key);
    } else {
        return binarySearch(arr, mid + 1, r, key);
    }
}

int main() {
    int n, key;
    cin >> n >> key;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << binarySearch(arr, 0, n - 1, key);
}

// 8 9
// 1 2 3 4 5 6 7 8
