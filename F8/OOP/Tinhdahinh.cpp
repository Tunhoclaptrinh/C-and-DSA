#include <iostream>

using namespace std;

class Caculator {
public:
    int x;

    Caculator() {
    };

    Caculator(int x) {
        this->x = x;
    }

    int add(int a, int b) {
        return a + b;
    }

    float add(float a, float b) {
        return a + b;
    }
};

class Point {
public:
    int x;
    int y;

    Point() {
    }

    Point(int x, int y) {
        this->x = x;
        this->y = y;
    }

    // Hàm bạn nạp chồng >>
    friend istream &operator>>(istream &in, Point &d) {
        cout << "Nhap x y: ";
        in >> d.x >> d.y;
        return in;
    }

    // Hàm bạn nạp chồng <<
    friend ostream &operator<<(ostream &out, const Point &d) {
        out << "(" << d.x << ", " << d.y << ")";
        return out;
    }

    friend Point operator+(Point &d1, Point &d2) {
        Point d3;
        d3.x = d1.x + d2.x;
        d3.y = d1.y + d2.y;

        return d3;
    }
};

class Animal {
public:
    // virtual => có thể thêm cái này vào sẽ trở thành phương thức ảo
    void move() {
        cout << "Animal moved" << endl;
    }
};

class Dog : public Animal {
public:
    void move() {
        cout << "Dog moved" << endl;
    }

    void parentMove () {
        Animal::move();
    }
};

int main() {
    Caculator cal;

    int a = 1, b = 2;
    float c = 3.5, d = 4.6;

    cout << cal.add(a, b) << endl;
    cout << cal.add(c, d) << endl;

    // Nạp chồng toán tử

    Point p1, p2;
    cin >> p1 >> p2;
    cout << "Toa do: " << p1 << p2 << endl;
    cout << p1 + p2 << endl;

    // Ghi đè
    Animal animal;
    animal.move();

    Dog dog;
    dog.move();
    dog.parentMove();

    Animal* animal2 = new Dog;

    animal2->move(); // Gọi Dog::move()

    delete animal2;

    return 0;
}
