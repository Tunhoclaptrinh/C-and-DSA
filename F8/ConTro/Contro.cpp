#include<iostream>

using namespace std;

int main() {
    int n = 4;

    int *i_ptr = &n;

    *i_ptr = 6;

    cout << i_ptr << endl;
    cout << &n << endl;
    cout << *i_ptr << endl;

    return 0;
}