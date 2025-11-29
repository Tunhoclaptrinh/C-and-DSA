#include <iostream>
using namespace std;

int main() {
    int n, sum;
    cout << "n = ";
    cin >> n;

    sum = 0;

    while (n > 0) {
        sum += n % 10;
        n = (n - n % 10) / 10;
    }

    cout << sum << endl;

    return 0;
}
