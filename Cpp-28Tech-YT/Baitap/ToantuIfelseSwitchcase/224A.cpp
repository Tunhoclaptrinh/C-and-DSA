#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long S1, S2, S3;
    cin >> S1 >> S2 >> S3;

    long long abc = sqrt(1LL * S1 * S2 * S3);

    long long a = abc / S2;
    long long b = abc / S3;
    long long c = abc / S1;

    long long P = 4 * (a + b + c);

    cout << P << endl;
    return 0;
}
