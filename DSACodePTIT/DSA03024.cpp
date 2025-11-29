#include <bits/stdc++.h>
using namespace std;

struct CV {
    int start, end;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<CV> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i].start >> arr[i].end;
        }

        // Sắp xếp theo thời gian kết thúc tăng dần
        sort(arr.begin(), arr.end(), [](const CV &a, const CV &b) {
            return a.end < b.end;
        });

        int cnt = 0;
        int last_end = -1;
        for (int i = 0; i < n; i++) {
            if (arr[i].start >= last_end) {
                cnt++;
                last_end = arr[i].end;
            }
        }

        cout << cnt << "\n";
    }

    return 0;
}
