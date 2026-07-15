/*
 * Student Name: Gathirua Lorna Titian
 * Admission No: BCS-03-116/2025
 * Description: Payment processing using Compile-time Polymorphism (Function Overloading)
 */

#include <iostream>
#include <iomanip>

using namespace std;

class Payment {
public:
    // Cash Payment
    void processPayment(int amount) {
        cout << "Processing Cash Payment: KES " << amount << endl;
        cout << "Final Paid: KES " << amount << "\n" << endl;
    }

    // Card Payment
    void processPayment(double amount, double transactionFee) {
        double total = amount + transactionFee;
        cout << "Processing Card Payment: KES " << amount << " (+ KES " << transactionFee << " fee)" << endl;
        cout << "Final Paid: KES " << total << "\n" << endl;
    }

    // Mobile Payment
    void processPayment(double amount, double transactionFee, double discount) {
        double total = (amount + transactionFee) - discount;
        cout << "Processing Mobile Payment: KES " << amount << " (+ KES " << transactionFee << " fee, - KES " << discount << " disc)" << endl;
        cout << "Final Paid: KES " << total << "\n" << endl;
    }
};

int main() {
    Payment payEngine;

    cout << "--- Overloading Demo (Compile-Time Polymorphism) ---" << endl;
    
    payEngine.processPayment(1000);                      
    payEngine.processPayment(2500.00, 75.0);             
    payEngine.processPayment(1500.00, 40.0, 100.0);       

    return 0;
}