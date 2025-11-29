#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int a;
        cin >> a;
        int arr[a];
        for (int i = 0; i < a; i++) {
            cin >> arr[i];
        }

        int min =  abs(arr[0] - arr[1]);
        for (int i = 0; i < a - 1; i++) {
            for (int j = i + 1; j < a; j++) {
                if (abs(arr[i] - arr[j]) < min) {
                    min = abs(arr[i] - arr[j]);
                }
            }
        }
        cout << min << "\n";

    }

    return 0;
}
