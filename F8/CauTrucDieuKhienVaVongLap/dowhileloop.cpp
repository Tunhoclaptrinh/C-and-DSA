#include <iostream>
using namespace std;

int main() {
    // int i =1;
    int i = 11;

    do { // luôn được chạy một lần đầu tiên
        cout<< i << endl;
        i++;
    }
    while (i <= 10) ; // từ vòng thứ 2 đổ đi mới kiểm tra điều kiện tiếp tục
    return 0;
}
