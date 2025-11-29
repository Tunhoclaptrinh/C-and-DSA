#include <bits/stdc++.h>
using namespace std;

// nextPermutation cua bieuthuctoanhoc
bool nextPermutation(vector<int> &arr) {
    int n = arr.size();
    int i = n - 2;

    while (i >= 0 && arr[i] >= arr[i + 1]) i--;
    if (i < 0) return false;
    int j = n - 1;

    while (arr[j] <= arr[i]) j--;
    swap(arr[i], arr[j]);
    reverse(arr.begin() + i + 1, arr.end());

    return true;
}

// kiem tra hoan vi co hop le khong
bool isValid(const vector<int> &a) {
    for (int i = 0; i < a.size() - 1; i++) {
        if (a[i] - a[i + 1] == 1 || a[i] - a[i + 1] == -1)
            return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int t;
        cin >> t;

        vector<int> arr(t);
        for (int i = 0; i < t; i++) arr[i] = i + 1;

        do {
            if (isValid(arr)) {
                for (int x : arr) cout << x;
                cout << "\n";
            }
        } while (nextPermutation(arr));
    }
    return 0;
}
