#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = 0;
        }
    }

    int watering_can[m][3];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> watering_can[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < 3; j++) {
            cout << watering_can[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < m; i++) {
        int x = watering_can[i][0];
        int y = watering_can[i][1];
        arr[x][y] = 1;

        for (int k = 0; k < watering_can[i][2]; k++) {
            arr[x+k+1][watering_can[i][0]] = 1;
            arr[x-k-1][watering_can[i][0]] = 1;

            arr[watering_can[i][1]][y+k+1] = 1;
            arr[watering_can[i][1]][y-k-1] = 1;
        }
    }




    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] != 1) {
                count++;
            }
        }
    }
    cout <<  endl;

    cout << count << endl;
}


// 5 2
// 2 2 2
// 0 0 1
//
//
//
// 2 2 2
// 1 0 1
//
// 1 1 1 0 0
// 1 0 1 0 0
// 1 1 1 1 1
// 0 0 1 0 0
// 0 0 1 0 0
//
// 13
