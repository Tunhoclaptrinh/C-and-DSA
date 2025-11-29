#include <iostream>
#include <string>
using namespace std;

class Square {
private:
    float side;

public:
    Square(int _side) {
        side = _side;
    }

    // setter
    void setSide(int _side) {
        side = _side;
    }

    // getter
    float getSide() {
        return side;
    }
};

int main() {
    Square s1(3);
    // Khong the duoc
    // s1.side = 3;

    // Phai thong qua getter/setter
    cout << s1.getSide() << endl;

    s1.setSide(5);
    cout << s1.getSide() << endl;

    return 0;
}
