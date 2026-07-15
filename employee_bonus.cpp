/*
 * Student Name: Gathirua Lorna Titian
 * Admission No: BCS-03-116/2025
 * Description: Calculates bonuses and total salaries for 5 employees using a for loop
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string name;
    double basicSalary;
    
    cout << "--- Employee Bonus Calculation (5 Employees) ---" << endl;

    for (int i = 1; i <= 5; i++) {
        cout << "\n[Employee #" << i << "]" << endl;
        cout << "Enter Name: ";
        if (i > 1) cin.ignore();
        getline(cin, name);
        
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;

        double bonus = 0.05 * basicSalary;
        double totalSalary = basicSalary + bonus;

        cout << "Report -> Name: " << name 
             << " | Basic: KES " << fixed << setprecision(2) << basicSalary
             << " | Bonus: KES " << bonus 
             << " | Total: KES " << totalSalary << endl;
    }

    return 0;
}