#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Account {
private:
    string name;
    int balance;

    public:
    Account(string n, int b) {
        this->name = n;
        this->balance = b;
    }

    string getName() {
        return this->name;
    }

    int getBalance() {
        return this->balance;
    }

    void setBalance(int b) {
        this->balance = b;
    }

    void setName(string n) {
        this->name = n;
    }
};

class Bank {
    private:
    vector<Account> accounts;

    public:
    void addAccount(Account a) {
        this->accounts.push_back(a);
    }

    void getAccount(string name) {
        for (auto &acc : accounts) {
            if (acc.getName() == name) {
                cout << "Account: " << acc.getName()
                     << ", Balance: " << acc.getBalance() << endl;
                return;
            }
        }
        cout << "Account not found!\n";
    }
};

int main() {
    // ví dụ vector
    // vector<int> numbers;
    //
    // numbers.push_back(1);
    // numbers.push_back(2);
    // numbers.push_back(3);
    //
    // for (int i = 0; i < numbers.size(); i++) {
    //     cout << numbers[i] << endl;
    // }
    //
    // numbers.erase(numbers.begin() + 1);
    //
    // for (int i = 0; i < numbers.size(); i++) {
    //     cout << numbers[i] << endl;
    // }

    Bank bank;
    bank.addAccount(Account("Alice", 1));
    bank.addAccount(Account("Bob", 2));

    bank.getAccount("Alice");
    bank.getAccount("Bob");
    bank.getAccount("Charlie");

    return 0;
}