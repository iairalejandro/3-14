#include <string>
#include <iostream>

using namespace std;

class Account {
public:
    Account(std::string accountName, int initialBalance)
        : name{accountName} {

        if (initialBalance > 0) {
            balance = initialBalance;
        }
    }

    void deposit(int depositAmount) {
        if(depositAmount > 0) {
            balance = balance + depositAmount;
        }
    }

    int getBalance() const {
        return balance;
    }

    void setName(std::string accountName) {
        name = accountName;
    }

    std::string getName() const {
        return name;
    }

    void displayAccount() {
        cout << "Nombre del Usuario: " << getName() << "\n";
        cout << "Su total de dinero es: " << getBalance() << "\n";
    }

private:
    std::string name;
    int balance{0};

};
