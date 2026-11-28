#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    // Constructor
    BankAccount(string name, double initialBalance) {
        accountHolder = name;
        balance = initialBalance;
    }

    // Deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Rs. " << amount << " deposited successfully!" << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Withdraw money
    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount!" << endl;
        }
        else if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        }
        else {
            balance -= amount;
            cout << "Rs. " << amount << " withdrawn successfully!" << endl;
        }
    }

    // Get account balance
    double getBalance() const {
        return balance;
    }

    // Display account details
    void display() const {
        cout << "\nAccount Holder: " << accountHolder << endl;
        cout << "Current Balance: Rs. " << getBalance() << endl;
    }
};

int main() {
    // Create an object
    BankAccount account1("Nimra", 5000);

    account1.display();

    cout << "\n--- Deposit Operation ---" << endl;
    account1.deposit(2000);

    cout << "\n--- Withdrawal Operation ---" << endl;
    account1.withdraw(1500);

    cout << "\n--- Final Account Details ---" << endl;
    account1.display();

    return 0;
}
