#include <bits//stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        int arr[n][n];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> arr[i][j];
            }
        }

        int sum = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                sum += arr[i][j];
            }
        }

        cout << sum << endl;

    }

    return 0;
}