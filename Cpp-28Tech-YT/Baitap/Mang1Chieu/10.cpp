#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        vector<int> v(arr, arr + n); // copy nội dung của mảng a cho vector v
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++) {
            auto it = upper_bound(v.begin(), v.end(), arr[i]);
            if (it == v.end()) {
                cout << "_ ";
            } else {
                cout << *it << "\n ";
            }
        }
    }

    return 0;
}
