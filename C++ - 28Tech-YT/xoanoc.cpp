#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int n , m ;
    cin >> n >> m;

    int arr[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    int row = 0, col = 0;
    while (row < n && col < m) {
        // duyệt hàng
        for (int j = col; j < m; j++) {
            cout << arr[row][j] << " ";
        }
        row++;

        for (int i = row; i < n; i++) {
            cout << arr[i][m - 1] << " ";
        }
        m--;

        if (row < n) {
            for (int j = m - 1; j >= col; j--) {
                cout << arr[n - 1][j] << " ";
            }
            n--;
        }

        if (col < m) {
            for (int i = n - 1; i >= row; i--) {
                cout << arr[i][col] << " ";
            }
            col++;
        }
    }

    return 0;
}
