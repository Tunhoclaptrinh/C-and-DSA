#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int arr[n];

    map<int, bool> mp;
    for (int &x: arr) {
        cin >> x;
        if (!mp[x]) {
            cout << x << ' ';
            mp[x] = true;
        }
    }

    return 0;
}
