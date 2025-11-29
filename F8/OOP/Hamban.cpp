#include <iostream>

using namespace std;

class Box {
private:
    int width;

public:
    Box(){}

    Box(int w) {
       this->width = w;
    }

    friend void printWidth(Box b);
};

void printWidth(Box b) {
    cout << "Width: " << b.width << endl; // truy cập trực tiếp vào private
}


int main() {
    printWidth(Box(10));
    return 0;
}
