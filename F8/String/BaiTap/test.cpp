#include <iostream>
#include <string>

using namespace std;


int Dq(int number) {
    int sum = 0;

    while (number) {
        sum += number % 10;
        number = (number - number % 10) / 10;
    }

    number = sum;

    if (number <= 9) {
        return number;
    }

    return Dq(number);
}


int main() {
    int number;
    cin >> number;

    cout << Dq(number) << endl;
    return 0;
}