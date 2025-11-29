#include <bits/stdc++.h>
using namespace std;

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

        int prefixSum[n];
        prefixSum[0] = arr[0];
        for (int i = 1; i < n; i++) {
            prefixSum[i] = arr[i] + prefixSum[i - 1];
        }

        int max = prefixSum[0];
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                int sum = prefixSum[j] - (i > 0 ? prefixSum[i - 1] : 0);
                if (sum > max) {
                    max = sum;
                }
            }
        }

        cout << max << endl;
    }

    return 0;
}
