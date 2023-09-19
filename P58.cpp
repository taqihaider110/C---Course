// Question:-
// Develop a C++ class called BankAccount that encapsulates the balance of an account as a private member.
//  Include methods for depositing and withdrawing money while ensuring that the balance is not accessed
//   directly from outside the class. Write a client program to test these operations.
#include <iostream>
#include <string>
using namespace std;
class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    BankAccount(const string holder, double initialBalance)
        : accountHolder(holder), balance(initialBalance) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited $" << amount << " into the account. New balance: $" << balance << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn $" << amount << " from the account. New balance: $" << balance << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient balance." << endl;
        }
    }

    void displayBalance() const {
        cout << "Account balance for " << accountHolder << ": $" << balance << endl;
    }
};

int main() {
    BankAccount myAccount("Taqi_Haider", 1000.0);

    myAccount.displayBalance(); // Display initial balance

    myAccount.deposit(500.0);   // Deposit $500
    myAccount.withdraw(200.0);  // Withdraw $200
    myAccount.withdraw(1500.0); // Attempt to withdraw $1500 (insufficient balance)

    myAccount.displayBalance(); // Display final balance

    return 0;
}
