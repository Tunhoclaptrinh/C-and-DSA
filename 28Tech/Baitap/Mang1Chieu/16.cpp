#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int pos[101] = {0};
        for (int i = 0; i < m; i++) {
            int x;
            cin >> x;
            pos[x - 1] = 1;
        }
        for (int i = 0; i < n; i++) {
            if (pos[i] == 0) {
                continue;
            }
            int index = i;
            while (index < n && pos[index] == 1) {
                index++;
            }

            // [i, index]
            sort(arr + i, arr + index + 1);
            i = index;
        }
        bool flag = true;
        for (int i = 0; i < n; i++) {
            if (arr[i] > arr[i + 1]) {
                flag = false;
                break;
            }
        }
        if (!flag) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES";
        }
    }
    return 0;
}
