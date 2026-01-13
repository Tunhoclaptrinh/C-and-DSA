#include <bits/stdc++.h>
#define ll long long
using namespace std;

int binarySearch(const vector<int> &arr, int l, int r, int key) {
    if (l > r) {
        return -1;
    }
    int mid = (r + l) / 2;
    if (key == arr[mid]) {
        return mid;
    } else if (arr[mid] > key) {
        return binarySearch(arr, l, mid - 1, key);
    } else {
        return binarySearch(arr, mid + 1, r, key);
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());

    int t;
    cin >> t;
    while (t--) {
        int q;
        cin >> q;
        if (binarySearch(arr, 0, n - 1, q) >= 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
