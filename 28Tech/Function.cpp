#include <bits/stdc++.h>

using namespace std;
// using ll = long long;
// định nghĩa kiểu => sử dụng 1 tên mới cho kiểu dữ liệu
// typedef long long ll;

//> sử dụng 1 tên mới cho kiểu dữ liệu (tương tự typedef) ngoài ra còn có thể định nghĩa cho 1 giá trị nào đó, // định nghĩa được cả cấu trúc như là for ...
#define ll long long
//định nnghiax đụược cả giá trị
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
// định nghĩa được cả cấu trúc như là for ...
#define FOR(i, a, b) for (int i = a; i < b; i++)

void xinchao(int n) {
    // tham số
    cout << "hello world" << endl;
    cout << "NTT" << endl;
    cout << n << endl;
}

void displayNumber(ll x, ll y, ll z) {
    cout << y << ' ' << x << ' ' << z << endl;
    cout << x + y + z << endl;
    cout << "Ket thuc" << endl;
}

int sumDigit(long long n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    xinchao(20); // đối số

    displayNumber(1, 2, 3);

    int x;
    cin >> x;
    for (int i = 1; i <= x; i++) {
        ll n;
        cin >> n;
        cout << sumDigit(n) << endl;
    }

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    return 0;
}
