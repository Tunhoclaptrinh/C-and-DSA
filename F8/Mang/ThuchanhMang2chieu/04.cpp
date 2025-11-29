#include <iostream>
using namespace std;

int main() {
    int n,m, sum;
    cin>>n>>m;
    int arr[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "arr[" << i << "][" << j<< "]" << ": " ;
            cin >> arr[i][j];
        }
    }

    sum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0 || i == n-1 || j == 0 || j == m-1) {
                sum = sum + arr[i][j];
            }
        }
    }

    cout << "Tong cac gia tri bien la: " << sum << endl;

    return 0;
}
