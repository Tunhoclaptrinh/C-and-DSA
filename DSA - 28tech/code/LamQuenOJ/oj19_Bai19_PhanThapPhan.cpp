#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    float f;
    cin >> f;

    cout << (int) f << endl;
    cout << fixed << setprecision(2) << f - floor(f) << endl;

    return 0;
}
