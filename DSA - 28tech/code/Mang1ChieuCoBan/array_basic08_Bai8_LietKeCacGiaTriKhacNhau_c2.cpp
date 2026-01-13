#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int arr[n];

    set<int> se;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (se.find(arr[i]) == se.end()) {
            cout << arr[i] << ' ';
        }
        se.insert(arr[i]);
    }

    return 0;
}
