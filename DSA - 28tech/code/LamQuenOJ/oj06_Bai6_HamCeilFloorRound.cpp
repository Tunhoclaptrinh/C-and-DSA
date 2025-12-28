#include <bits/stdc++.h>
#define ll long long
using namespace std;

// ceil : làm tròn lên số nguyên gần nhất,
// floor : làm tròn xuống số nguyên gần nhất,
// round : làm tròn số nguyên phụ thuộc vào phần thập phân.

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    double x;
    cin >> x;

    cout << (int) floor(x) << endl;
    cout << (int) ceil(x) << endl;
    cout << (int) round(x) << endl;


    return 0;
}
