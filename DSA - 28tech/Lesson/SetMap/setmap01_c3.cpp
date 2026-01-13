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

    sort(arr, arr + n);

    int cnt = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}
