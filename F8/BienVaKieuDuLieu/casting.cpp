#include <iostream> // input output stream => viết tắt iostream
using namespace std;

int main() {
   int a = 1.4;
    cout << a<< endl; // a = 1

    int b = 3;
    int c = 2;

    float d = b/c;

    cout << d << endl; // d = 1

    float e = (float) b/c;

    cout << e << endl; // e = 1.5



    char ch = 'A';
    int ascii_code = (int)ch; // hoặc static_cast<int>(ch)
    std::cout << "Ky tu: " << ch << ", Ma ASCII: " << ascii_code << std::endl;

    int num = 66;
    char ch2 = (char)num; // hoặc static_cast<char>(num)
    std::cout << "Ma ASCII: " << num << ", Ky tu: " << ch2 << std::endl;

    return 0;
}
