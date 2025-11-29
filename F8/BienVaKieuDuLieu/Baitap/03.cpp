#include <iostream>

using namespace std;

int main () {
    int a, b;
    cin >> a >> b;

    int temp = a;
    a = b;
    b = temp;
    cout << "Gia tri cua a la " << a << endl;
    cout << "Gia tri cua b la " << b << endl;

    return 0;
}
