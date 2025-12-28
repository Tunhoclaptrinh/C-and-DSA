#include <bits/stdc++.h>

using namespace std;
using ll = long long;


void nhap(int a[][50], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int arr[n][m] = {
            {1, 2, 3},
            {4, 5, 6}
        };

        // for (int i = 0; i < n; i++) {
        //     for (int j = 0; j < m; j++) {
        //         cin >> arr[i][j];
        //     }
        // }

        int sum = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << arr[i][j] << " ";
                sum += arr[i][j];
            }
            cout << endl;
        }
        cout << sum << endl;
    }


    // mảng với vector
    int z;
    cin >> z;
    vector<int> v[z];
    for (int i = 0; i < z; i++) {
        int s;
        cin >> s;
        for (int j = 0; j < s; j++) {
            int t;
            cin >> t;
            v[i].push_back(t);
        }
    }

    for (int i = 0; i < z; i++) {
        for (int j = 0; j < v[i].size(); j++) {
            cout << v[i][j] << " ";
        }
    }

    return 0;
}
