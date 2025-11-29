#include <iostream>
using namespace std;

int main() {
    float a,b;
    cin>>a>>b;

    if ( a == 0 && b == 0) {
        cout << "Phuong trinh co vo so nghiem";
    } else if (a == 0 && b != 0 ) {
        cout << "Phuong trinh vo nghiem";
    } else {
        cout << "Nghiem cua phuong trinh la " << -b/a;
    }

    return 0;
}
