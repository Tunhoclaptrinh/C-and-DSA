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

    int minX = INT_MAX;
    for (int i = 0; i < n; i++) {
        minX = min(minX, arr[i]);
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == minX) {
            ans++;
        }
    }

    cout << ans;

    return 0;
}
