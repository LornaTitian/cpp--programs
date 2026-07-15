/*
 * Student Name: Gathirua Lorna Titian
 * Admission No: BCS-03-116/2025
 * Description: Student Fee Management System using Classes and Objects
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Student {
private:
    string studentName;
    string admissionNumber;
    double feeBalance;

public:
    void inputStudent() {
        cout << "Enter Student Name: ";
        getline(cin, studentName);
        cout << "Enter Admission Number: ";
        getline(cin, admissionNumber);
        cout << "Enter Initial Fee Balance: KES ";
        cin >> feeBalance;
    }

    void makePayment(double amount) {
        if (amount > 0) {
            feeBalance -= amount;
            cout << "\nPayment of KES " << fixed << setprecision(2) << amount << " processed successfully." << endl;
        } else {
            cout << "\nInvalid payment amount." << endl;
        }
    }

    void displayStatus() {
        cout << "\n--- Student Status Report ---" << endl;
        cout << "Name:             " << studentName << endl;
        cout << "Admission Number: " << admissionNumber << endl;
        cout << "Fee Balance:      KES " << fixed << setprecision(2) << feeBalance << endl;
    }
};

int main() {
    Student student1;

    cout << "--- Student Registration ---" << endl;
    student1.inputStudent();
    student1.displayStatus();

    double payment;
    cout << "\nEnter amount to pay: KES ";
    cin >> payment;
    student1.makePayment(payment);

    student1.displayStatus(); 

    return 0;
}