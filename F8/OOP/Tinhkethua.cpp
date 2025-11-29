#include <iostream>

using namespace std;

class Animal { // class cha
protected:
    float weight = 30;

public:
    // float weight;

    void run() {
        cout << "Animal is running..." << endl;
    }


};

class Pet {
public:
    int nickName;
    //...
};

class Cat : public Animal,public Pet { // class con
public:
    string name;

    void eat() {
        cout << name << " is eating... " << endl;
    }

    void showWeight() {
        cout << this->weight << endl;
    }
};

int main() {
    Cat cat;
    // cat.weight = 1.2; này sẽ bị lỗi
    cat.name = "Cat";

    cat.run();
    cat.eat();
    // cout << cat.weight << endl;

    cat.showWeight();
    return 0;
}
