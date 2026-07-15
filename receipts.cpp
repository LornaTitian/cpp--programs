#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
   
    string customerName;
    string phoneModel;
    int quantity;
    double pricePerPhone;

    cout << "--- Mobile Phone Sales System (Ruiru Branch) ---" << endl;
    cout << "Enter Customer Name: ";
    getline(cin, customerName);
    
    cout << "Enter Phone Model Purchased: ";
    getline(cin, phoneModel);
    
    cout << "Enter Quantity Bought: ";
    cin >> quantity;
    
    cout << "Enter Price Per Phone: ";
    cin >> pricePerPhone;

    double totalSalesAmount = quantity * pricePerPhone;

    cout << "\n========================================" << endl;
    cout << "            SALES RECEIPT               " << endl;
    cout << "========================================" << endl;
    cout << left << setw(20) << "Customer Name:" << customerName << endl;
    cout << left << setw(20) << "Phone Model:" << phoneModel << endl;
    cout << left << setw(20) << "Quantity Bought:" << quantity << endl;
    cout << left << setw(20) << "Price Per Phone:" << "KES " << fixed << setprecision(2) << pricePerPhone << endl;
    cout << "----------------------------------------" << endl;
    cout << left << setw(20) << "Total Sales Amount:" << "KES " << totalSalesAmount << endl;
    cout << "========================================" << endl;
    cout << "Thank you for shopping with us!" << endl;

    return 0;
}