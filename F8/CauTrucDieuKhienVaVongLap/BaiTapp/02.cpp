#include <iostream>
using namespace std;

int main() {
    int n, res;
    cin >> n;
    res = 0;

    for (int i = 1; i <= n; i += 2) {
        res += i;
    }
    cout << "Ket qua la " << res << endl;

    return 0;
}
