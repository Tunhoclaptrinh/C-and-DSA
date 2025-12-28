#include <iostream>

using namespace std;

int main() {
    long long t, n;
    cin >> t >> n;

    if (n <= 0 || t <= 0 || t > 12) {
        cout << "invalid" << endl;
    } else {
        switch (t) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                cout << "Thang " << t << " nam " << n << " co " << 31 << " ngay" << endl;
                break;
            case 2:
                if (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0)) {
                    cout << "Thang " << t << " nam " << n << " co " << 29 << " ngay" << endl;
                } else {
                    cout << "Thang " << t << " nam " << n << " co " << 28 << " ngay" << endl;
                }
                break;
            default:
                cout << "Thang " << t << " nam " << n << " co " << 30 << " ngay" << endl;
        }
    }

    return 0;
}
