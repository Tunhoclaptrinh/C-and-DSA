#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int a, k;
        cin >> a >> k;
        int arr[a];
        for (int i = 0; i < a; i++) {
            cin >> arr[i];
        }

        for (int i = a - 1; i >= 0; i--) {
            for (int j = 0; j < i; j++) {
                if (arr[j] < arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

        for (int i = 0; i < k; i++) {
            cout << arr[i] << " ";
        }


    }

    return 0;
}
