/*
 * Student Name: Gathirua Lorna Titian
 * Admission No: BCS-03-116/2025
 * Description: Computes daily total sales from transactional records inside 'sales.txt'
 */

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
    ifstream salesFile("sales.txt");

    if (!salesFile) {
        cerr << "Error: Unable to open file 'sales.txt'!" << endl;
        return 1;
    }

    double transactionAmount;
    double totalSales = 0.0;

    while (salesFile >> transactionAmount) {
        totalSales += transactionAmount;
    }

    cout << "--- Daily Sales Transaction Total ---" << endl;
    cout << "Total sales for today: KES " << fixed << setprecision(2) << totalSales << endl;

    salesFile.close();
    return 0;
}