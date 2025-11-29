#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int cnt[1000001];

int main() {
    int n;
    cin >> n;
    while (n--) {
        int a; cin >> a;
        int arr[a];
        memset(cnt, 0, sizeof(cnt));
        for (int i = 0; i < a; i++) {
            cin >> arr[i];
            cnt[arr[i]]++;
        }

        int sumDup = 0;
        for (int i = 0; i < a; i++) {
            if (cnt[arr[i]] > 1) {
                sumDup++;
            }
        }

        cout << sumDup << endl;
    }

    return 0;
}
