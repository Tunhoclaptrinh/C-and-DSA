#include <iostream>
#include <string>
using namespace std;

class Cat {
private:
    string name;
    int age;

public:
    Cat(){}

    Cat(string _name, int _age) {
        this->name = _name;
        this->age = _age;
    }

    void setName(string name) {
        this->name = name;
    }
    void setAge(int age) {
        this->age = age;
    }

    string getName() {
        return this->name;
    }
    int getAge() {
        return this->age;
    }
};

int main() {
    Cat cat("Bo", 2);
    cout << "Name: " << cat.getName();
    cout << ", age: " << cat.getAge() << endl;

    Cat *cat2 = new Cat("Be", 3);
    cout << "Name: " << cat2->getName();
    cout << ", age: " << cat2->getAge() << endl;
    // Hoặc
    cout << "Name: " << (*cat2).getName();
    cout << ", age: " << (*cat2).getAge() << endl;

    delete cat2;

    return 0;
}
