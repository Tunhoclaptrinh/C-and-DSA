#include <iostream>
#include <string>
using namespace std;


// Class, Object
// 1 con nguoi, ten : Nguyen Van A, tuoi: 28, dia chi: Ha Noi

class Person {
public: // Cong khai
    // Properties
    string name;
    int age;
    string address;

    // Constructor
    Person() {
        // name = "";
        // age = 0;
        // address = "";
    }

    Person(string _name, int _age, string _address) {
        this->name = _name;
        this->age = _age;
        this->address = _address;
    }

    // Methods
    void work() {
        cout << name << " is working..." << endl;
    }

private: // Rieng tu
    string id;
    // ...

};


int main() {
    Person person1;

    person1.name = "Nguyen Van A";
    person1.age = 28;
    person1.address = "Ha Noi";

    cout << "Name: " <<person1.name;
    cout << ", age: " << person1.age;
    cout << ", address: " << person1.address << endl;
    person1.work();

    Person person2 ("Nguyen Van B", 18, "Thanh Hoa");

    cout << "Name: " <<person2.name;
    cout << ", age: " << person2.age;
    cout << ", address: " << person2.address << endl;
    person2.work();

    return 0;
}
