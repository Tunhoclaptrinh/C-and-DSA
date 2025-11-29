#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    for (int i = 1; i < n; i++) {
        // lay ra phan tu o chi so i
        int x = arr[i];
        int pos = i - 1;
        while (pos >= 0 && arr[pos] > x) {
            arr[pos + 1] = arr[pos];
            --pos;
        }
        arr[pos + 1] = x;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }

    return 0;
}

// 8
// 8 2 1 9 7 3 6 5
