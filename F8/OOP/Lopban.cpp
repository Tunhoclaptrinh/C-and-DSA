#include <iostream>
using namespace std;

class B;
class A {
private:
    int secret;

public:
    A(int s) {
        this->secret = s;
    }

    // Cho phép toàn bộ class B truy cập vào private của A
    friend class B;
};

class B {
public:
    void showSecret(A a) {
        cout << "Secret = " << a.secret << endl; // Truy cập trực tiếp vào private của A
    }
};


int main() {
    B b;
    b.showSecret(A(1));



    return 0;
}
