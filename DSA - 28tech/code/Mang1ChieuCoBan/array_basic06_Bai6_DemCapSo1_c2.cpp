#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, int> mp;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    int k;
    cin >> k;

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int need = k - arr[i];
        if (arr[i] != need) {
            cnt += mp[need];
        } else {
            cnt += mp[need] - 1;
        }
    }

    cout << cnt / 2;

    return 0;
}
