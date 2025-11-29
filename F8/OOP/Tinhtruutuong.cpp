#include <iostream>
using namespace std;

// Lớp trừu tượng
class Animal {
public:
    virtual void sound() = 0; // Hàm thuần ảo
    virtual ~Animal() {}      // Destructor ảo để tránh leak
};

// Lớp con bắt buộc phải định nghĩa lại hàm sound()
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal* a1 = new Dog();
    Animal* a2 = new Cat();

    a1->sound();  // Dog barks
    a2->sound();  // Cat meows

    delete a1;
    delete a2;
    return 0;
}
