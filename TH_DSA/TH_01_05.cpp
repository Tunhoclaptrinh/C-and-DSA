// #include <bits/stdc++.h>
// using namespace std;
//
// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//
//
//     int n, p;
//     cin >> n >> p;
//
//     int arr[n];
//
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//
//     for (int i = 0; i < n; i++) {
//         int idx = i;
//         for (int j = i + 1; j < n; j++) {
//             if (arr[idx] > arr[j]) {
//                 idx = j;
//             }
//         }
//         if (idx != i) {
//             int tmp = arr[idx];
//             arr[idx] = arr[i];
//             arr[i] = tmp;
//         }
//     }
//
//     int count = 0;
//     for (int i = n - 1; i >= 0; i--) {
//         if (p >= arr[i]) {
//             count += p / arr[i];
//             p %= arr[i];
//         }
//     }
//
//     if (p == 0) {
//         cout << count << endl;
//     } else {
//         cout << -1;
//     }
//
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int n;
long long S;
vector<long long> arr;
int ans = INT_MAX;

void dfs(int idx, long long sum, int cnt) {
    if (sum == S) {
        ans = min(ans, cnt);
        return;
    }
    if (sum > S || cnt >= ans || idx >= n) return;

    // chọn tờ idx
    dfs(idx + 1, sum + arr[idx], cnt + 1);

    // bỏ qua tờ idx
    dfs(idx + 1, sum, cnt);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> S;
    arr.resize(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    sort(arr.rbegin(), arr.rend());

    dfs(0, 0, 0);

    if (ans == INT_MAX) cout << -1 << "\n";
    else cout << ans << "\n";

    return 0;
}
