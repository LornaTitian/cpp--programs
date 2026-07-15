/*
 * Student Name: Gathirua Lorna Titian
 * Admission No: BCS-03-116/2025
 * Description: Water billing system with 10% discount using functions
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void getCustomerDetails(string &name, double &units);
double calculateBill(double units, double ratePerUnit = 150.0);
double applyDiscount(double baseBill, double units);
void displayBill(string name, double units, double baseBill, double discount, double finalAmount);

int main() {
    string name;
    double units = 0.0;

    getCustomerDetails(name, units);
    double baseBill = calculateBill(units);
    double discount = applyDiscount(baseBill, units);
    double finalAmount = baseBill - discount;
    displayBill(name, units, baseBill, discount, finalAmount);

    return 0;
}

void getCustomerDetails(string &name, double &units) {
    cout << "--- Water Billing System ---" << endl;
    cout << "Enter Customer Name: ";
    getline(cin, name);
    cout << "Enter Units Consumed: ";
    cin >> units;
}

double calculateBill(double units, double ratePerUnit) {
    return units * ratePerUnit;
}

double applyDiscount(double baseBill, double units) {
    if (units > 100.0) {
        return baseBill * 0.10; 
    }
    return 0.0;
}

void displayBill(string name, double units, double baseBill, double discount, double finalAmount) {
    cout << "\n========================================" << endl;
    cout << "             WATER BILL                 " << endl;
    cout << "========================================" << endl;
    cout << left << setw(25) << "Customer Name:" << name << endl;
    cout << left << setw(25) << "Units Consumed:" << fixed << setprecision(1) << units << " units" << endl;
    cout << left << setw(25) << "Bill (Before Discount):" << "KES " << setprecision(2) << baseBill << endl;
    cout << left << setw(25) << "Discount Allowed:" << "KES " << discount << endl;
    cout << "----------------------------------------" << endl;
    cout << left << setw(25) << "Final Amount Payable:" << "KES " << finalAmount << endl;
    cout << "========================================" << endl;
}