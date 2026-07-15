/*
 * Student Name: Gathirua Lorna Titian
 * Admission No: BCS-03-116/2025
 * Description: Allows withdrawals iteratively using a while loop until criteria met
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double balance;
    double withdrawalAmount;

    cout << "--- Savings Withdrawal System ---" << endl;
    cout << "Enter Starting Account Balance: KES ";
    cin >> balance;

    while (balance > 0) {
        cout << "\nCurrent Balance: KES " << fixed << setprecision(2) << balance << endl;
        cout << "Enter amount to withdraw (or 0 to stop): KES ";
        cin >> withdrawalAmount;

        if (withdrawalAmount <= 0) {
            cout << "Withdrawal cancelled by user." << endl;
            break;
        }

        if (withdrawalAmount > balance) {
            cout << "Insufficient funds! You cannot withdraw more than KES " << balance << endl;
            break; 
        }

        balance -= withdrawalAmount;
        cout << "Withdrawal Successful!" << endl;

        if (balance == 0) {
            cout << "Your balance has reached KES 0.00." << endl;
            break;
        }
    }

    cout << "\nTransaction Ended. Final Balance: KES " << balance << endl;
    return 0;
}