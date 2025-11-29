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
        }

        for (int i = 0; i < 1000001; i++) {
            for (int j = 0; j < a; j++) {
                if (i == arr[j]) {
                    cnt[i]++;
                }
            }
        }

        int sumDup = 0;
        for (int i = 0; i < 1000001; i++) {
            if (cnt[i] > 1) {
                sumDup += cnt[i];
            }
        }

        cout << sumDup << endl;
    }

    return 0;
}
