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



bool chua6(int n) {
    while (n > 0) {
        if (n % 10 == 6) {
            return 1;
        }
        n /= 10;
    }

    return 0;
}

bool tongchan(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    if (sum % 2 == 0) return 1;
    else return 0;
}

bool chanle(int n) {
    int odd = 0, even = 0;
    while (n > 0) {
        if ((n % 10) % 2 == 0) {
            even++;;
        } else {
            odd++;
        }

        n /= 10;
    }

    return odd > even;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    if (chua6(n) && tongchan(n) && chanle(n)) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
