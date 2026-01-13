#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int arr[n];
    map<int, int> frequency;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        frequency[arr[i]]++;
    }
    for (int i = 0; i < n; i++)
        if (frequency[arr[i]] > 0) {
            cout << arr[i] << " " << frequency[arr[i]] << "\n";
            frequency[arr[i]] = 0;
        }

    return 0;
}
