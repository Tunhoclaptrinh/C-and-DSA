#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int low, int high, int target) {
    if (low > high) {
        return -1;
    }
    int mid = (low + high) / 2;
    if (arr[mid] == target) {
        return mid;
    } else if (arr[mid] > target) {
        return binarySearch(arr, low, mid - 1, target);
    } else {
        return binarySearch(arr, mid + 1, high, target);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, key;
        cin >> n >> key;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        if (binarySearch(arr, 0, n - 1, key) == -1) {
            cout << "NO" << endl;
        } else {
            cout << binarySearch(arr, 0, n - 1, key) + 1 << endl;
        }
    }

    return 0;
}
