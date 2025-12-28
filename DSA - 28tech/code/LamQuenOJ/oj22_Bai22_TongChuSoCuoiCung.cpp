#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x, y, z;
    cin >> x >> y >> z;

    cout << x % 10 + y % 100 + z % 1000 << endl;

    return 0;
}
