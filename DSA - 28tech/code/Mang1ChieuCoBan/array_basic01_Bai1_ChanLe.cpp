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

    int cntOdd = 0, cntEven = 0;
    ll sumOdd = 0, sumEven = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            cntEven++;
            sumEven += arr[i];
        } else {
            cntOdd++;
            sumOdd += arr[i];
        }
    }

    cout << cntEven << endl;
    cout << cntOdd << endl;
    cout << sumEven << endl;
    cout << sumOdd << endl;


    return 0;
}
