#include <iostream>
#include <fstream>

using namespace std;

// Read/Write File

struct Person {
    string name;
    int age;

    Person() {
    }

    Person(string _name, int _age) {
        name = _name;
        age = _age;
    }
};

int main() {
    Person *persons = new Person[2];
    persons[0] = Person("John", 20);
    persons[1] = Person("Tien", 30);

    fstream fs;
    fs.open("test1.txt");


    if (fs.is_open()) {
        cout << "Mo file thanh cong!" << endl;
    } else {
        cout << "Mo file that bai!" << endl;
    }

    // for (int i = 0; i < 2; i++) {
    //     cout << "Name: " << persons[i].name;
    //     cout << ", age: " << persons[i].age << endl;
    // }

    for (int i = 0; i < 2; i++) {
        // fs << i << ". " << "Name: " << persons[i].name;
        // fs << ", age: " << persons[i].age << endl;
        getline(fs, persons[i].name);
        fs >> persons[i].age;
        fs.ignore();
    }




    return 0;
}
