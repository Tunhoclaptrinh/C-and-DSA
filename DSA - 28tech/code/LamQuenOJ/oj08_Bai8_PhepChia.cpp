#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> b >> a;

    cout << a / b << endl;
    cout << fixed << setprecision(2) << (float) a / b << endl;

    return 0;
}
