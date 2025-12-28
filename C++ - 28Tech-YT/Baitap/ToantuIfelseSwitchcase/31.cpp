#include <iostream>

using namespace std;

int main() {
    float a, b, c, d;
    cin >> a >> b >> c >> d;
    float avg = (a + b + c * 2 + d * 3) / (1 + 1 + 2 + 3);

    if (avg >= 8) {
        cout << avg << " GIOI" << endl;
    } else if (avg < 8 && avg >= 6.5) {
        cout << avg << " KHA" << endl;
    } else if (avg < 6.5 && avg >= 5) {
        cout << avg << " TRUNG BINH" << endl;
    } else {
        cout << avg << " YEU" << endl;
    }

    return 0;
}
