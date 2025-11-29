#include <iostream>

using namespace std;

int main() {
    int ngay;
    cout << "Nhap so ngay (1-7): ";
    cin >> ngay;

    switch (ngay) {
        case 1:
            cout << "Chu Nhat" << endl;
            break;
        case 2:
            cout << "Thu Hai" << endl;
            break;
        case 3:
            cout << "Thu Ba" << endl;
            break;
        case 4:
            cout << "Thu Tu" << endl;
            break;
        case 5:
            cout << "Thu Nam" << endl;
            break;
        case 6:
            cout << "Thu Sau" << endl;
            break;
        case 7:
            cout << "Thu Bay" << endl;
            break;
        default:
            cout << "Khong hop le!" << endl;
    }

    return 0;
}
