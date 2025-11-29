#include <iostream>
using namespace std;

int main() {
    int n,S;
    cin >> n;
    S = 0;

    for (int i = 1; i <= n; i++) {
        S += i*i;
    }

    cout << S << endl;

    return 0;
}
