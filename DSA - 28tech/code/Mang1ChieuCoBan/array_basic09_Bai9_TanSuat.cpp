#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int arr[n];
    int frequency[1000];
    memset(frequency, 0, sizeof(frequency));

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        frequency[arr[i]]++;
    }

    for (int i = 0; i < n; i++) {
        bool seen = false;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                seen = !seen;
                break;
            }
        }

        if (!seen) cout << arr[i] << ' ' << frequency[arr[i]] << endl;
    }

    return 0;
}
