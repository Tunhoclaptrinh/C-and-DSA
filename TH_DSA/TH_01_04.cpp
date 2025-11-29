#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int swaps = 0;
        for (int i = 0; i < n; i++) {
            int idx = i;
            for (int j = i + 1; j < n; j++) {
                if (arr[idx] > arr[j]) {
                    idx = j;
                }
            }
            if (idx != i) {
                int tmp = arr[idx];
                arr[idx] = arr[i];
                arr[i] = tmp;
                swaps++;
            }
        }
        //
        // for (int i = 0; i < n; i++) {
        //     cout << arr[i] << " ";
        // }
        cout << swaps << "\n";
    }

    return 0;
}
