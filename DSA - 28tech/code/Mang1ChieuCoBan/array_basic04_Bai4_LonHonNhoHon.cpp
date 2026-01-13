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
    int x;
    cin >> x;
    int less = 0, greater = 0;


    for (int i = 0; i < n; i++) {
        if (arr[i] > x) {
            greater++;
        } else if (arr[i] < x) {
            less++;
        }
    }

    cout << less << endl;
    cout << greater << endl;

    return 0;
}
