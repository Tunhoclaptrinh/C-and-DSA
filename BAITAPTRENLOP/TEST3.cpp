#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[n][n];
    int area[m][5];
    // vector<pair<int, vector<int>>> colored[n][n];
    int colored[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = 0;
            colored[i][j] = 0;
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> area[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        int r1 = area[i][0];
        int c1 = area[i][1];
        int r2 = area[i][2];
        int c2 = area[i][3];

        int maMau = area[i][4];

        r1 = max(0, r1);
        c1 = max(0, c1);
        r2 = min(n - 1, r2);
        c2 = min(n - 1, c2);

        for (int j = r1; j <= r2; j++) {
            for (int k = c1; k <= c2; k++) {
                if (colored[j][k] == 0) {
                    colored[j][k] = maMau;
                } else if (colored[j][k] != maMau && colored[j][k] != -1) {
                    colored[j][k] = -1;
                }
            }
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < 5; j++) {
            cout << area[i][j] << "  ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (colored[i][j] == -1) {
                cout << colored[i][j] << " ";
            } else {
                cout << colored[i][j] << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;


    // Đếm và in số ô của từng màu
    set<int> mauSet;
    for (int i = 0; i < m; i++) {
        mauSet.insert(area[i][4]);
    }
    mauSet.insert(-1);

    for (int mau: mauSet) {
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                if (colored[j][k] == mau) cnt++;
            }
        }
        if (mau == -1)
            cout << "(-1): " << cnt << endl;
        else
            cout << mau << ": " << cnt << endl;
    }
}

// Test case
// 10 2
//
// 1 1 5 4 1
//
// 2 3 6 6 2
//
//
//
//
// Result:
// 1  1  5  4  1
// 2  3  6  6  2
//
// 0  0  0  0  0  0  0  0  0  0
// 0  0  0  0  0  0  0  0  0  0
// 0  0  0  0  0  0  0  0  0  0
// 0  0  0  0  0  0  0  0  0  0
// 0  0  0  0  0  0  0  0  0  0
// 0  0  0  0  0  0  0  0  0  0
// 0  0  0  0  0  0  0  0  0  0
// 0  0  0  0  0  0  0  0  0  0
// 0  0  0  0  0  0  0  0  0  0
// 0  0  0  0  0  0  0  0  0  0
//
// 0  0  0  0  0  0  0  0  0  0
// 0  1  1  1  1  0  0  0  0  0
// 0  1  1  -1 -1 2  2  0  0  0
// 0  1  1  -1 -1 2  2  0  0  0
// 0  1  1  -1 -1 2  2  0  0  0
// 0  1  1  1  1  2  2  0  0  0
// 0  0  0  2  2  2  2  0  0  0
// 0  0  0  0  0  0  0  0  0  0
// 0  0  0  0  0  0  0  0  0  0
// 0  0  0  0  0  0  0  0  0  0
//
// (-1): 6
// 1: 14
// 2: 12
