#include <bits/stdc++.h>
#include <cstdlib> // rand, srand

using namespace std;
using ll = long long;

int UCLN(int a, int b) {
    if (b == 0) {
        return a;
    }
    return UCLN(b, a % b);
}

const int maxn = 10000;
int a[maxn];

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

        int res = 1;

        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                res = max(res, UCLN(arr[i], arr[j]));
            }
        }

        cout << res << endl;

    }

    return 0;
}
