#include <iostream>

using namespace std;

int TongDay(int n) {
    if (n == 1) return 1;
    return n + TongDay(n - 1);
}

int UCLN(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return UCLN(b, a % b);
    }

    // //neu a hoac b = 0 thi ucln la so con lai
    // if(a == 0 || b == 0){
    //     return a + b;
    // }
    // while(a != b){
    //     if(a > b){
    //         a = a - b; //Thay thế số lớn hơn bằng hiệu 2 số
    //     }
    //     else{
    //         b = b - a; //Thay thế số lớn hơn bằng hiệu 2 số
    //     }
    // }
    // return a; // b
}

int main() {
    cout << "Hello World!" << endl;
    cout << TongDay(4) << endl;

    cout << UCLN(12, 18) << endl;

    return 0;
}
