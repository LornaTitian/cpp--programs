/*
 * Student Name: Gathirua Lorna Titian
 * Admission No: BCS-03-116/2025
 * Description: Bank Account system demonstrating Constructors and Destructors
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class BankAccount {
private:
    string accountHolderName;
    string accountNumber;
    double accountBalance;

public:
    BankAccount(string name, string accNum, double initialBalance) {
        accountHolderName = name;
        accountNumber = accNum;
        accountBalance = initialBalance;
        cout << "\n>>> Account successfully created! <<<" << endl;
    }

    void displayAccount() {
        cout << "\n--- Account Details ---" << endl;
        cout << "Holder Name: " << accountHolderName << endl;
        cout << "Acc Number:  " << accountNumber << endl;
        cout << "Balance:     KES " << fixed << setprecision(2) << accountBalance << endl;
    }

    ~BankAccount() {
        cout << ">>> Account closed successfully (Object Destroyed). <<<" << endl;
    }
};

int main() {
    {
        cout << "Creating a new bank account..." << endl;
        BankAccount myAccount("Jane Doe", "ACC123456789", 50000.00);
        myAccount.displayAccount();
        cout << "\nLeaving active block scope..." << endl;
    } 

    return 0;
}