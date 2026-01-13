#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0 && i % 2 == 0) {
            found = true;
            cout << arr[i] << ' ';
        }
    }

    if (!found) {
        cout << "NONE";
    }

    return 0;
}
